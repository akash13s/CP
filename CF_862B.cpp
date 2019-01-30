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
ll vis[100005],color[100005];
void dfs(ll u)
{
	ll i,child;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		if (!vis[child])
		{
			vis[child]=1;
			color[child]=!color[u];	
			dfs(child);
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
	ll n;cin>>n;
	ll i;adj[n+1];vis[n+1];color[n+1];
	for (i=0;i<n-1;i++)
	{
		ll x,y;cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	vis[1]=1;color[1]=1;
	dfs(1);ll z=0,o=0;
	for (i=1;i<=n;i++)
	{
		if (color[i]==0)	z++;
		else if (color[i]==1)	o++;
	}
	cout<<z*o-(n-1)<<endl;
}