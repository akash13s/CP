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
ll c;
void dfs(ll nd,ll vis[],vll adj[])
{
	vis[nd]=1;c++;
	ll i;
	for (i=0;i<adj[nd].size();i++)
	{
		if (!vis[adj[nd][i]])
		{
			vis[adj[nd][i]]=1;
			dfs(adj[nd][i],vis,adj);
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
		ll n,m,i;cin>>n>>m;
		c=0;ll vis[n+1];
		ll grp=0,cnt=1;
		memset(vis,0,sizeof(vis));
		vll adj[n+1];
		for (i=0;i<m;i++)
		{
			ll x,y;cin>>x>>y;
			adj[x].pb(y);
			adj[y].pb(x);
		}
		for (i=1;i<=n;i++)
		{
			if (vis[i])	continue;
			else
			{
				grp++;
				dfs(i,vis,adj);
				cnt*=c;cnt%=M;c=0;
			}
		}
		cout<<grp<<" "<<cnt<<endl;
	}
}
