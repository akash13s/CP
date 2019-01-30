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
bool dfs(ll nd,vll adj[],ll vis[],ll p)
{
	ll i;vis[nd]=1;
	for (i=0;i<adj[nd].size();i++)
	{
		if (!vis[adj[nd][i]])
			dfs(adj[nd][i],adj,vis,nd);
		else if (p!=adj[nd][i])
			return true;
	}
	return false;
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
	vll adj[n+1];ll vis[n+1];
	memset(vis,0,sizeof(vis));
	ll i;
	for (i=0;i<m;i++)
	{
		ll x,y;
		cin>>x>>y;
		adj[x].pb(y);adj[y].pb(x);
	}
	bool k=false,k1=false;
	k=dfs(1,adj,vis,-1);
	for (i=1;i<=n;i++)
	{
		if (vis[i]==false){
			k1=true;
			break;
		}
		// cout<<vis[i]<<endl;
	}
	if (k==false and m==n-1 and k1==false)	cout<<"YES"<<endl;
	else	cout<<"NO"<<endl;	
}
