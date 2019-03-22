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
ll vis[100005],a[100005],n,level[100005];
ll bfs(ll u)
{
	queue<ll>q;vll v;
	level[u]=0;vis[u]=1;
	q.push(u);ll i,child,nd;
	while (!q.empty())
	{
		nd=q.front();v.pb(nd);
		q.pop();
		for (i=0;i<adj[nd].size();i++)
		{
			child=adj[nd][i];
			if (!vis[child])	vis[child]=1,level[child]=level[nd]+1,q.push(child);
		}
	}
	nd=v[0];
	for (i=1;i<v.size();i++)
	{
		if (level[v[i]]>level[nd])
			nd=v[i];
	}
	for (i=0;i<v.size();i++)	level[v[i]]=0,vis[v[i]]=0;
	q.push(nd);ll x;v.clear();
	vis[nd]=1;
	while (!q.empty())
	{
		x=q.front();v.pb(x);
		q.pop();
		for (i=0;i<adj[x].size();i++)
		{
			child=adj[x][i];
			if (!vis[child])	vis[child]=1,level[child]=level[x]+1,q.push(child);
		}
	}
	ll ma=0;
	for (i=0;i<v.size();i++)	ma=max(ma,level[v[i]]);
	return ma+1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

 //    #ifndef ONLINE_JUDGE
 //    freopen("input.txt", "r", stdin);
 //    freopen("output.txt", "w", stdout);
	// #endif
	cin>>n;
	ll i;a[n+1];vis[n+1];adj[n+1];level[n+1];
	for (i=1;i<=n;i++)	cin>>a[i];
	for (i=0;i<n-1;i++)
	{
		ll x,y;cin>>x>>y;
		if (a[x]%2==0 and a[y]%2==0)	adj[x].pb(y),adj[y].pb(x);
		else if (a[x]%2==1 and a[y]%2==1)		adj[x].pb(y),adj[y].pb(x);

	}
	ll k,odd=0,even=0;
	memset(vis,0,sizeof(vis));
	for (i=1;i<=n;i++)
	{
		if (a[i]%2==0 and !vis[i])
			k=bfs(i),even=max(even,k);
	}
	for (i=1;i<=n;i++)
	{
		if (a[i]%2==1 and !vis[i])
			k=bfs(i),odd=max(odd,k);
	}
	cout<<even<<" "<<odd<<endl;
}