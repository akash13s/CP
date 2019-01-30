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
ll n,q,in[100005],out[100005];vll adj[100005];
map<ll,ll> c;
void dfs1(ll u,ll par)
{
	ll d,i,child;in[u]=0;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		if (child==par)	continue;
		dfs1(child,u);
		d=0;
		if (c[child]>c[u])
			d=c[child]-c[u];
		in[u]=max(in[u],d+in[child]);
	}
}
void dfs2(ll u,ll par)
{
	ll mx1=-1,mx2=-1,child,i,d,k,longest;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		if (child==par)	continue;
		d=0;
		if (c[child]>c[u])
			d=c[child]-c[u];
		if (in[child]+d>=mx1)	mx2=mx1,mx1=in[child]+d;
		else if (in[child]+d>mx2)	mx2=in[child]+d;
	}
	
	for (i=0;i<adj[u].size();i++)
	{
		longest=mx1;
		child=adj[u][i];
		if (child==par)	continue;
		d=0;
		if (c[child]>c[u])
			d=c[child]-c[u];
		if (in[child]+d==longest)	longest=mx2;
		out[child]=d+max(out[u],longest);
		dfs2(child,u);
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
	cin>>n>>q;
	ll i;adj[n];in[n];out[n];
	for (i=0;i<n;i++)	
	{
		ll w;cin>>w;
		c[i]=w;
	}
	for (i=0;i<n-1;i++)
	{
		ll x,y;cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	dfs1(0,-1);
	dfs2(0,-1);
	ll ans;
	while (q--)
	{
		ll v;cin>>v;

		ans=max(in[v],out[v]);
		cout<<ans<<endl;
		// cout<<in[v]<<" "<<out[v]<<endl;
	}
}