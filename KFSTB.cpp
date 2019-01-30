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
ll dfs(ll nd,ll d,vll adj[],ll dp[])
{
	if (dp[nd]!=-1)	return dp[nd];
	if (nd==d)	return 1;
	ll i,c=0;
	for (i=0;i<adj[nd].size();i++)
	{
		c+=dfs(adj[nd][i],d,adj,dp);
		c%=M;
	}
	dp[nd]=c;
	return dp[nd];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll d;cin>>d;
	while (d--)
	{
		ll c,b,s,t;
		cin>>c>>b>>s>>t;
		vll adj[c+1];ll dp[c+1],i;
		memset(dp,-1,sizeof(dp));
		for (i=0;i<b;i++)
		{
			ll x,y;cin>>x>>y;
			adj[x].pb(y);
		}
		ll k=dfs(s,t,adj,dp);
		cout<<k<<endl;
	}
}
