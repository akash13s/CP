//AUTHOR: *Akash Shrivastva*
//Birla Institute of Technology,Mesra,India
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define M 100001
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define pll vector< pair <ll,ll> >
#define F first
#define S second
#define PII pair <ll,ll>
pll adj[M];
ll level[M],p[M][18],mi[M][18],ma[M][18];
void dfs(ll u,ll par,ll w)
{
	level[u]=level[par]+1;
	p[u][0]=par;
	if (par==0)	{
		mi[u][0]=INT_MAX;ma[u][0]=INT_MIN;
	}
	else	mi[u][0]=ma[u][0]=w;
	ll i,child;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i].F;
		if (par==child)	continue;
		else	dfs(child,u,adj[u][i].S);
	}
}
void precomputeMatrix(ll n)
{
	ll i,j;
	for (i=1;i<18;i++)
	{
		for (j=1;j<=n;j++)
		{
			if (p[j][i-1]!=-1)
			{
				p[j][i]=p[p[j][i-1]][i-1];
				mi[j][i]=min(mi[j][i-1],mi[p[j][i-1]][i-1]);
				ma[j][i]=min(ma[j][i-1],ma[p[j][i-1]][i-1]);
				
			}
		}
	}
}
ll lca(ll u,ll v)
{
	if (level[u]>level[v])
		swap(u,v);
	ll d=level[v]-level[u];
	ll i;
	for (i=0;i<18;i++)
	{
		if ((d>>i) & 1)
			v=p[v][i];
	}
	if (u==v)	return u;
	for (i=17;i>=0;i--)
	{
		if (p[u][i]!=p[v][i])
			u=p[u][i],v=p[v][i];
	}
	return p[u][0];
}
ll calc_min(ll l,ll u,ll d)
{
	ll i,mini=INT_MAX;
	if (d==0)	return mini;
	for (i=0;i<18;i++)
	{
		if ((d>>i) & 1)	
			mini=min(mini,mi[u][i]),u=p[u][i];
	}
	return mini;
}
ll calc_max(ll l,ll u,ll d)
{
	ll i,maxi=INT_MIN;
	if (d==0)	return maxi;
	for (i=0;i<18;i++)
	{
		if ((d>>i) & 1)
			maxi=max(maxi,ma[u][i]),u=p[u][i];
	}
	return maxi;
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
    adj[n+1],level[n+1],p[n+1][18],mi[n+1][18],ma[n+1][18];
    memset(p,-1,sizeof(p));
    ll i;
    for (i=0;i<n-1;i++)
    {
    	ll x,y,w;
    	cin>>x>>y>>w;
    	adj[x].pb(mp(y,w));
    	adj[y].pb(mp(x,w));
    }
    level[0]=0;
    dfs(1,0,0);
    precomputeMatrix(n);
    ll k;cin>>k;
    while (k--)
    {
    	ll x,y;cin>>x>>y;
    	ll l=lca(x,y);
    	ll dx=level[x]-level[l],dy=level[y]-level[l];
    	ll mini,maxi;
    	mini=min(calc_min(l,x,dx),calc_min(l,y,dy));
    	maxi=max(calc_max(l,x,dx),calc_max(l,y,dy));
    	cout<<mini<<" "<<maxi<<endl;
    }
}