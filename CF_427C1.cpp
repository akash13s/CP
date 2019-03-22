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
vll adj[100005];
ll vis[100005],c[100005];
stack<ll> s;
void dfs(ll u)
{
	ll i,child;
	vis[i]=1;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		if (!vis[child])	dfs(child);
	}
	s.push(u);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n,i;cin>>n;
	adj[n+1];vis[n+1];c[n+1];
	for (i=0;i<n;i++)	cin>>c[i];
	ll m;cin>>m;
	for (i=0;i<m;i++)
	{
		ll x,y;cin>>x>>y;
		adj[x].pb(y);
		// adj1[y].pb(x);
	}
	memset(vis,0,sizeof(vis));
	for (i=1;i<=n;i++)
	{
		if (!vis[i])	dfs(i);
	}
	ll u;
	while (!s.empty())
	{
		u=s.top();
		cout<<u<<endl;
		s.pop();
	}
}