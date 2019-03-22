//AUTHOR: *Akash Shrivastva*
//Birla Institute of Technology,Mesra,India
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define M 5001
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define pll vector< pair <ll,ll> >
#define F first
#define S second
#define PII pair <ll,ll>
vll adj[M],adj1[M],cg[M];
ll vis[M],comp[M],in[M],vis1[M],cnt=0;
stack <ll> s;
void dfs(ll u)
{
	vis[u]=1;
	ll i,child;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		if (!vis[child]){
			dfs(child);
		}
	}
	s.push(u);
}
void dfs1(ll u)
{
	vis[u]=1;comp[u]=cnt;
	ll i,child;
	for (i=0;i<adj1[u].size();i++)
	{
		child=adj1[u][i];
		if (!vis[child])
			dfs1(child);
	}
}
void dfs2(ll u)
{
	vis1[u]=1;
	ll i,child;
	for (i=0;i<cg[u].size();i++)
	{
		child=cg[u][i];
		if (!vis1[child]){
			dfs2(child);
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
	ll n,m,s1;cin>>n>>m>>s1;
	adj[n+1],adj1[n+1],cg[n+1],vis[n+1],comp[n+1];
	ll i;
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
	memset(vis,0,sizeof(vis));
	memset(comp,0,sizeof(comp));
	while (!s.empty())
	{
		ll u=s.top();
		// cout<<u<<endl;
		s.pop();
		if (!vis[u]){
			cnt++;
			dfs1(u);
		}
	}
	// for (i=1;i<=n;i++)	cout<<i<<" "<<comp[i]<<endl;
	ll j,child;
	in[cnt+1];vis1[cnt+1];
	memset(in,0,sizeof(in));
	memset(vis1,0,sizeof(vis1));
	for (i=1;i<=n;i++)
	{
		for (j=0;j<adj[i].size();j++)
		{
			child=adj[i][j];
			if (comp[i]!=comp[child])
				cg[comp[i]].pb(comp[child]),in[comp[child]]++;
		}
	}
	memset(vis1,0,sizeof(vis1));
	dfs2(comp[s1]);
	ll ans=0;
	for (i=1;i<=cnt;i++)
	{
		if (!vis1[i] and in[i]==0)
			ans++;
	}
	cout<<ans<<endl;
}