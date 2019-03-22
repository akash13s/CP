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
vll adj[101];ll vis[101];
ll c=0;
void dfs(ll u,ll par)
{
	vis[u]=1;
	ll i,child;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		if (!vis[child])	dfs(child,u);
		else if (child!=par)
		{
			c++;
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
	ll n,m;cin>>n>>m;
	ll i;
	for (i=0;i<m;i++)
	{
		ll x,y;cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	dfs(1,0);
	
	for (i=1;i<=n;i++)
	{
		if (!vis[i])
		{
			c=0;
			break;
		}
	}
	if (c==0 or c>2)	cout<<"NO"<<endl;
	else	cout<<"FHTAGN!"<<endl;
}