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
vll adj[150005];ll vis[150005],k=0;
void dfs(ll u)
{
	ll child,i;
	vis[u]=1;k++;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		if (!vis[child])
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
	ll n,m;cin>>n>>m;
	ll i;
	for (i=0;i<m;i++)
	{
		ll x,y;cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	ll ans=0;
	for (i=1;i<=n;i++)
	{
		if (!vis[i])
		{
			k=0;
			dfs(i);
			ans+=(k*(k-1))/2;
		}
	}
	if (ans-m>0)	cout<<"NO"<<endl;
	else	cout<<"YES"<<endl;
}