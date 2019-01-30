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
ll dfs(ll nd,ll vis[],vll adj[],ll color[],ll cr)
{
	vis[nd]=1;
	color[nd]=!cr;
	ll i;
	for (i=0;i<adj[nd].size();i++)
	{
		if (vis[adj[nd][i]])
		{
			if (color[nd]==color[adj[nd][i]])
				return 0;
		}
		else
			dfs(adj[nd][i],vis,adj,color,color[nd]);
	}
	return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll t,j;cin>>t;
	for (j=1;j<=t;j++)
	{
		ll n,m;cin>>n>>m;
		ll i;vll adj[n+1];ll vis[n+1],color[n+1];
		memset(vis,0,sizeof(vis));
		ll flag=0,k=0;
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
				k=k or dfs(i,vis,adj,color,1);
				if (k==1)	break;
			}
		}
		cout<<"Scenario #"<<j<<":"<<endl;
		if (k==0)	cout<<"Suspicious bugs found!"<<endl;
		else	cout<<"No suspicious bugs found!"<<endl;
	}
}
