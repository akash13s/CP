//AUTHOR: *Akash Shrivastva*
//Birla Institute of Technology,Mesra,India
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define M 200005
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define pll vector< pair <ll,ll> >
#define F first
#define S second
#define PII pair <ll,ll>
vll adj[M];
ll level[M],parent[M],in[M],out[M];
ll c;
void dfs(ll u, ll p)
{
	in[u]=c++;
	ll i,child;
	parent[u]=p; level[u]=level[p]+1;
	for (i=0;i<adj[u].size();i++)
	{
		child = adj[u][i];
		if (child==p) continue;
		dfs(child, u);
	}
	out[u]=c++;
}
ll check(ll u, ll v)
{
	if (in[v]>=in[u] and out[v]<=out[u])	return 1;
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
	ll n,m;cin>>n>>m;
	ll i;
	for (i=0;i<n-1;i++)
	{
		ll x,y;cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}	
	level[0]=0;
	c=0;
	dfs(1,0);
	// for (i=1;i<=n;i++)	cout<<in[i]<<" "<<out[i]<<endl;
	while (m--)
	{
		ll k,u;cin>>k;
		vll v;
		for (i=0;i<k;i++){
			cin>>u;
			v.pb(u);
		}
		ll maxLevelNode=v[0], ma=level[v[0]];
		for (i=1;i<v.size();i++)
		{
			if (level[v[i]]>ma)	ma=level[v[i]], maxLevelNode = v[i];
		}
		ll flag=0;
		for (i=0;i<v.size();i++)
		{
			if (v[i]!=maxLevelNode)
			{	
				if (check(v[i],maxLevelNode) || check(parent[v[i]], maxLevelNode))
					continue;
				else
				{
					flag++;
					break;
				}
			}
		}
		if (flag)	cout<<"NO\n";
		else	cout<<"YES\n";
	}
}