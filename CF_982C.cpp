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
ll n,c[100005],ans=0;vll adj[100005];
void dfs(ll u,ll par)
{
	c[u]=1;
	ll i,child;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		if (child==par)	continue;
		dfs(child,u);
		if (c[child]%2==0)	ans++,c[child]=0;
		c[u]+=c[child];
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
	cin>>n;
	ll i;
	for (i=0;i<n-1;i++)
	{
		ll x,y;cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	if (n%2==1)	cout<<-1<<endl;
	else
	{
		dfs(1,0);
		cout<<ans<<endl;
	}	
}