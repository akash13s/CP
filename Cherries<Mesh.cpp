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
vll adj[100005];
ll vis[100005],cnt,c;
void dfs(ll u)
{
	vis[u]=1;
	cnt++;
	ll i,child;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		if (vis[child]==-1)
			dfs(child);
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
	ll t,h;cin>>t;
	for (h=1;h<=t;h++)
	{
		ll n,m;cin>>n>>m;
		ll i,j;
		adj[n+1];
		vis[n+1];
		c=0;
		cnt=0;
		for (i=0;i<=n;i++)	adj[i].clear();
		memset(vis,-1,sizeof(vis));
		for (i=0;i<m;i++)
		{
			ll x,y;cin>>x>>y;
			adj[x].pb(y);
			adj[y].pb(x);
		}
		ll ans=0;
		for (i=1;i<=n;i++)
		{
			if (vis[i]==-1)
			{
				c++;
				dfs(i);
				ans+=cnt-1;
				cnt=0;
			}
		}
		
		ans+=(c-1)*2;
		cout<<"Case #"<<h<<": "<<ans<<"\n";
	}
}
