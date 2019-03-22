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
vll adj[100005],adj1[100005];
ll vis[100005],a[100005],c=0;
stack<ll> s;map<ll,ll> m1;
void dfs(ll u)
{
	ll i,child;
	vis[u]=1;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		if (!vis[child])
			dfs(child);
	}
	s.push(u);
}
void dfs1(ll u)
{
	a[u]=++c;
	vis[u]=1;
	ll i,child;
	for (i=0;i<adj1[u].size();i++)
	{
		child=adj1[u][i];
		if (!vis[child])
			dfs1(child);
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
	ll n,m;cin>>n>>m;
	ll i;
	adj[n+1];vis[n+1];adj1[n+1],a[n+1];
	for (i=0;i<m;i++)
	{
		ll x,y;cin>>x>>y;
		adj[x].pb(y);m1[x]=y;
		adj1[y].pb(x);
	}
	memset(vis,0,sizeof(vis));
	dfs(1);ll u;
	memset(vis,0,sizeof(vis));
	memset(a,0,sizeof(a));
	while (!s.empty())
	{
		u=s.top();
		c=0;
		if (!vis[u]){
			dfs1(u);
			if (c==1)	a[u]=0;
		}
		s.pop();                   
	}
	for (i=1;i<=n;i++)
	{
		if (a[i]==0)	cout<<0<<" ";
		else	cout<<1<<" ";
	}
}