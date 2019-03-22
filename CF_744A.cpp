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
vll adj[1005],v[1005];ll vis[1005];
map<ll,ll> m1,nu;
void dfs(ll u,ll nd)
{
	vis[u]=1;nu[nd]++;
	ll i,child;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		if (!vis[child])	dfs(child,nd);
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
	ll n,m,k;cin>>n>>m>>k;
	ll i;adj[n+1];vis[n+1];
	for (i=0;i<k;i++)
	{
		ll x;cin>>x;
		m1[x]=1;
	}
	for (i=0;i<m;i++)
	{
		ll x,y;cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	memset(vis,0,sizeof(vis));ll ans=0,k1,ma=-1;
	for (auto itr=m1.begin();itr!=m1.end();itr++)
	{
		dfs(itr->F,itr->F);
		k1=nu[itr->F];
		ma=max(ma,k1);
		ans+=(k1*(k1-1))/2;
	}
	for (i=1;i<=n;i++)
	{
		if (!vis[i])
		{
			ans+=ma;ma++;
		}
	}
	cout<<ans-m<<endl;
}	