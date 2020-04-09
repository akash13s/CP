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
ll vis[500003],depth[500003];
vll adj[500003];
void dfs(ll u)
{
	vis[u]=1;
	ll i,child,d=0;
	for (i=0;i<adj[u].size();i++)
	{
		child = adj[u][i];
		if (!vis[child])
		{
			dfs(child);
			d=max(d,depth[child]);
		}
	}
	depth[u]=d+1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll t;cin>>t;
	while (t--)
	{
		ll n,k,i;cin>>n>>k;
		memset(vis,0,sizeof(vis));
		memset(depth,0,sizeof(depth));
		for (i=0;i<500003;i++)	
			adj[i].clear();
		for (i=0;i<n-1;i++)
		{
			ll x,y;cin>>x>>y;
			adj[x].pb(y);
			adj[y].pb(x);
		}
		dfs(1);
		ll cnt=0;
		for (i=1;i<=n;i++)
		{
			if (depth[i]<=k)
				cnt++;
		}
		cout<<cnt<<endl;
	}
}