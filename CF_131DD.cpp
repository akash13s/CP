//AUTHOR: *Akash Shrivastva*
//Birla Institute of Technology,Mesra,India
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define M 1000000007
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define pll vector< pair <ll,ll> >
#define F first
#define S second
#define PII pair <ll,ll>
vll adj[3005];ll vis[3005],level[3005];
ll p[3005];ll s,e;
PII dfs1(ll u,ll par)
{
	vis[u]=1;p[u]=par;
	ll i,child;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		if (!vis[child])	dfs1(child,u);
		else if (child!=par)
		{
			s=u;e=child;break;
		}
	}
	return mp(s,e);
}
void bfs(ll u)
{
	queue <ll> q;
	q.push(u);
	level[u]=0;vis[u]=1;ll i,nd,child;
	while (!q.empty())
	{
		nd=q.front();
		q.pop();
		for (i=0;i<adj[nd].size();i++)
		{
			child=adj[nd][i];
			if (!vis[child])	vis[child]=1,level[child]=level[nd]+1,q.push(child);
		}
	}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    ll n;cin>>n;
    ll i;adj[n+1];vis[n+1];level[n+1];
    for (i=0;i<n;i++)
    {
    	ll x,y;cin>>x>>y;
    	adj[x].pb(y);
    	adj[y].pb(x);
    }
    for (i=1;i<=n;i++)	sort(adj[i].begin(),adj[i].end());
    memset(vis,0,sizeof(vis));
	PII p1;
    p1=dfs1(1,0);vll v;
    e=p1.F;s=p1.S;cout<<s<<" "<<e<<endl;cout<<p[s]<<" "<<p[e]<<endl;
    while (s!=p[e])
    {
    	bfs(s);
    	// cout<<s<<endl;
    	s=p[s];
    }
    for (i=1;i<=n;i++)	cout<<level[i]<<" ";
}