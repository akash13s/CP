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
vll adj[200005];ll vis[200005];
map< ll, map <ll,ll> > m;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    ll n;cin>>n;
    ll a[n+2],i;
    for (i=1;i<=n;i++)	cin>>a[i];
    adj[n+2];vis[n+2];memset(vis,0,sizeof(vis));
	for (i=1;i<=n;i++)
	{
		if (!m[i][i-1])	adj[i].pb(i-1);
		if (!m[i][i+1])	adj[i].pb(i+1);
		adj[i].pb(a[i]);
	}
	queue<ll> q;ll level[n+2];
	q.push(1);vis[1]=1;level[1]=0;
	ll u,child;
	while (!q.empty())
	{
		u=q.front();
		q.pop();
		for (i=0;i<adj[u].size();i++)
		{
			child=adj[u][i];
			if (!vis[child])	vis[child]=1,level[child]=level[u]+1,q.push(child);
		}
	}
	for (i=1;i<=n;i++)	cout<<level[i]<<" ";
}
