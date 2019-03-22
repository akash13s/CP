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
vll adj[200005];ll in[200005],level[200005];
ll c=0;ll it[200005],ot[200005];
void dfs1(ll u,ll par)
{
	ll i,child;
	in[u]=0;it[u]=++c;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		if (child==par)	continue;
		level[child]=level[u]+1;
		dfs1(child,u);
		in[u]=max(in[u],in[child]+1);
	}
	ot[u]=++c;
}
ll check(ll x,ll y)
{
	if (it[x]<it[y] and ot[y]<ot[x])
		return 1;
	else	return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n,x;cin>>n>>x;
	ll i;adj[n+1];in[n+1];level[n+1];
	for (i=0;i<n-1;i++)
	{
		ll u,v;cin>>u>>v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	level[1]=0;
	dfs1(1,0);
	// for (i=1;i<=n;i++)	cout<<level[i]<<endl;
	ll ta,tb,ans=0;
	for (i=1;i<=n;i++)
	{
		if (check(i,x))
		{
			tb=level[x]-level[i];
			ta=level[i]-level[1];
			if (tb<ta)
				ans=max(ans,ta+in[i]);
		}
	}
	ans=max(ans,level[x]-level[1]+in[x]);
	cout<<ans*2<<endl;
}	