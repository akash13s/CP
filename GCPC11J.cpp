//AUTHOR: *Akash Shrivastva*
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
void dfs(ll nd,ll vis[],vll adj[],ll level[])
{
	vis[nd]=1;ll i;
	for (i=0;i<adj[nd].size();i++)
	{
		if (!vis[adj[nd][i]])
		{
			level[adj[nd][i]]=level[nd]+1;
			dfs(adj[nd][i],vis,adj,level);
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
	ll t;cin>>t;
	while (t--)
	{
		ll n,i;cin>>n;
		ll vis[n],level[n];memset(vis,0,sizeof(vis));memset(level,0,sizeof(level));
		vll adj[n];
		for (i=0;i<n-1;i++)
		{
			ll x,y;cin>>x>>y;
			adj[x].pb(y);
			adj[y].pb(x);
		}
		level[0]=0;
		dfs(0,vis,adj,level);
		ll node,d=-1;
		for (i=0;i<n;i++){
			if (level[i]>d)
				d=level[i],node=i;
		}
		memset(vis,0,sizeof(vis));memset(level,0,sizeof(level));

		dfs(node,vis,adj,level);
		ll ans=*max_element(level,level+n);
		if (ans%2==0)	cout<<ans/2<<endl;
		else	cout<<ans/2+1<<endl;
	}
}
