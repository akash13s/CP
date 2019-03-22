//AUTHOR: *Akash Shrivastva*
//Birla Institute of Technology,Mesra,India
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define M 100005
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define pll vector< pair <ll,ll> >
#define F first
#define S second
#define PII pair <ll,ll>
vll adj[M],adj1[M],scc[M];ll vis[M],c[M];
stack<ll> s,s1;
pll v;ll co=0;
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
	ll i,child;vis[u]=1;
	c[u]=co;
	for (i=0;i<adj1[u].size();i++)
	{
		child=adj1[u][i];
		if (!vis[child])
			dfs1(child);
	}
}
void topo(ll u)
{
	ll i,child;
	vis[u]=1;
	for (i=0;i<scc[u].size();i++)
	{
		child=scc[u][i];
		if (!vis[child])
			topo(child);
	}
	s1.push(u);
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
	ll i;adj[n+1];adj1[n+1];vis[n+1];c[n+1];scc[n+1];
	for (i=0;i<m;i++)
	{
		ll x,y;cin>>x>>y;
		adj[x].pb(y);
		adj1[y].pb(x);
		v.pb(mp(x,y));
	}
	memset(vis,0,sizeof(vis));
	for (i=1;i<=n;i++)
	{
		if (!vis[i])	dfs(i);
	}
	memset(vis,0,sizeof(vis));
	ll u;
	while (!s.empty())
	{
		u=s.top();
		if (!vis[u])
			co++,dfs1(u);
		s.pop();
	}
	for (i=0;i<v.size();i++)
	{
		ll x,y;
		x=v[i].F;y=v[i].S;
		if (c[x]!=c[y])	scc[x].pb(y);
	}
	memset(vis,0,sizeof(vis));
	for (i=1;i<=n;i++)
	{
		if (!vis[i])
			topo(i);
	}
	ll d[n+1],child;
	memset(d,0,sizeof(d));
	while (!s1.empty())
	{
		u=s1.top();
		for (i=0;i<scc[u].size();i++)
		{
			child=scc[u][i];
			d[child]=max(d[child],d[u]+1);
		}
		s1.pop();
	}
	ll ans=-1;
	for (i=1;i<=n;i++)	ans=max(ans,d[i]);
	cout<<ans<<endl;
}