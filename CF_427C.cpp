//AUTHOR: *Akash Shrivastva*
//Birla Institute of Technology,Mesra,India
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define M 100005
#define M1 1000000007
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define pll vector< pair <ll,ll> >
#define F first
#define S second
#define PII pair <ll,ll>
vll adj[M],adj1[M];pll v;
ll vis[M],c[M];
stack<ll> s;ll co=INT_MAX;
void dfs(ll u)
{
	ll i,child;
	vis[u]=1;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		if (!vis[child])	dfs(child);
	}
	s.push(u);
}
void dfs1(ll u)
{
	vis[u]=1;
	ll i,child;v.pb(mp(u,c[u]));co=min(co,c[u]);
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
	ll n;cin>>n;
	ll i;
	adj[n+1];vis[n+1];c[n+1];adj1[n+1];
	for (i=1;i<=n;i++)	cin>>c[i];
	ll m;cin>>m;
	for (i=0;i<m;i++)
	{
		ll x,y;cin>>x>>y;
		adj[x].pb(y);
		adj1[y].pb(x);
	}
	memset(vis,0,sizeof(vis));
	for (i=1;i<=n;i++)
	{
		if (!vis[i])
			dfs(i);
	}
	
	ll u,ans=0,cnt=1,f=0;
	memset(vis,0,sizeof(vis));
	while (!s.empty())
	{
		u=s.top();
		if (!vis[u]){
			v.clear();
			co=INT_MAX;
			dfs1(u),ans+=co;
			for (i=0;i<v.size();i++)
			{
				if (v[i].S==co)	f++;
			}
			cnt*=f;cnt%=M1;
			f=0;
		}	
		s.pop();
	}
	cout<<ans<<" "<<cnt<<endl;
}