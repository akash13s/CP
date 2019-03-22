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
vll adj[1001];
ll level[1001],p[1001][11];
void dfs(ll u,ll par)
{
	level[u]=level[par]+1;
	p[u][0]=par;
	ll i,child;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		if (child==par)	continue;
		else	dfs(child,u);
	}
}
void computeMatrix(ll n)
{
	ll i,j;
	for (i=1;i<11;i++)
	{
		for (j=1;j<=n;j++)
		{
			if (p[j][i-1]!=-1)
			{
				p[j][i]=p[p[j][i-1]][i-1];
			}
		}
	}
}
ll lca(ll u,ll v)
{
	ll u1=u,v1=v;
	if (level[u]>level[v])	swap(u,v);

	ll d=level[v]-level[u],i,j;
	for (i=0;i<11;i++)
	{
		if ((d>>i) & 1)
			v=p[v][i];
	}
	if (u==v)	return u;
	
	for (i=10;i>=0;i--)
	{
		if (p[u][i]!=p[v][i])
			u=p[u][i],v=p[v][i];
	}
	return p[u][0];
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
    ll h;
    for (h=1;h<=t;h++)
    {
    	ll n;cin>>n;
    	adj[n+1];level[n+1];p[n+1][11];
    	ll i,j;
    	for (i=0;i<n+1;i++)	adj[i].clear();

    	for (i=1;i<=n;i++)
    	{
    		ll x;cin>>x;
    		for (j=1;j<=x;j++)
    		{
    			ll nd;cin>>nd;
    			adj[i].pb(nd);
    			adj[nd].pb(i);
    		}
    	}
    	memset(p,-1,sizeof(p));
    	level[0]=0;
    	dfs(1,0);
    	computeMatrix(n);
    	ll q;cin>>q;
    	cout<<"Case "<<h<<":"<<endl;
    	while (q--)
    	{
    		ll x,y;cin>>x>>y;
    		cout<<lca(x,y)<<endl;
    	}
    }
}