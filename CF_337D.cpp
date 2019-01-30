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
vll adj[100005];ll n,m,d,in[100005],out[100005];
map<ll,ll> m1;
void dfs1(ll u,ll par)
{
	ll i,child,mx=0;
	if (!m1[u])	in[u]=INT_MIN;
	else	in[u]=0;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		if (child==par)	continue;
		dfs1(child,u);
		in[u]=max(in[u],in[child]+1);
	}
}
void dfs2(ll u,ll par)
{
	ll child,i,mx1=INT_MIN,mx2=INT_MIN,longest;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		if (child==par)	continue;
		if (in[child]>=mx1)
			mx2=mx1,mx1=in[child];
		else if (in[child]>mx2)
			mx2=in[child];
	}
	
	for (i=0;i<adj[u].size();i++)
	{
		longest=mx1;
		child=adj[u][i];
		if (child==par)	continue;
		if (longest==in[child])	longest=mx2;
		out[child]=1+max(out[u],longest+1);
		if (m1[child] and out[child]<0)
			out[child]=0;
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
    cin>>n>>m>>d;
    ll p[m],i;in[n+1];out[n+1];
    for (i=0;i<=n;i++)	in[i]=INT_MAX;
    for (i=0;i<m;i++)	cin>>p[i],m1[p[i]]=1;
    for (i=0;i<n-1;i++)
    {
    	ll x,y;cin>>x>>y;
    	adj[x].pb(y);
    	adj[y].pb(x);
    }
    dfs1(1,0);
    if (m1[1])	out[1]=0;
    else	out[1]=INT_MIN;	
    dfs2(1,0);
  	ll c=0;
    for (i=1;i<=n;i++)
    {
    	if (max(in[i],out[i])<=d)
    		c++;
    }
    cout<<c<<endl;
    // for (i=1;i<=n;i++)
    // 	cout<<in[i]<<" "<<out[i]<<endl;
}