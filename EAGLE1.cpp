//AUTHOR: *Akash Shrivastva*
//Birla Institute of Technology,Mesra,India
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define M 100005
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define pll vector< pair <ll,ll> >
#define F first
#define S second
#define PII pair <ll,ll>
pll adj[M];ll in[M],out[M],n;
void dfs1(ll u,ll par)
{
	ll mx=0,i,child,wt;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i].F;wt=adj[u][i].S;
		if (child==par)	continue;
		dfs1(child,u);
		mx=max(mx,in[child]+wt);
	}
	in[u]=mx;
}
void dfs2(ll u,ll par)
{
	ll mx1=-1,mx2=-1,w,child,i;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i].F;w=adj[u][i].S;
		if (child==par)	continue;
		if (in[child]+w>=mx1)
			mx2=mx1,mx1=in[child]+w;
		else if (in[child]+w>mx2)
			mx2=in[child]+w;
	}
	ll longest;
	for (i=0;i<adj[u].size();i++)
	{
		longest=mx1;
		child=adj[u][i].F;w=adj[u][i].S;
		if (child==par)	continue;
		if (longest==w+in[child])	longest=mx2;
		out[child]=w+max(out[u],longest);
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
    ll t;cin>>t;
    while (t--)
    {
    	cin>>n;ll i;
    	for (i=0;i<M;i++)
    		adj[i].clear();
    	memset(in,0,sizeof(in));memset(out,0,sizeof(out));
    	
    	for (i=0;i<n-1;i++)
    	{
    		ll x,y,w;
    		cin>>x>>y>>w;
    		adj[x].pb(mp(y,w));
    		adj[y].pb(mp(x,w));
    	}
    	dfs1(1,0);
    	dfs2(1,0);
    	for (i=1;i<=n;i++)
    		cout<<max(in[i],out[i])<<" ";
    	cout<<endl;

    }
}