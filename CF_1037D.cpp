//AUTHOR: *Akash Shrivastva*
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
ll n,id[200005],vis[200005],a[200005];
vll adj[200005];
bool compare(ll a,ll b)
{
	return id[a]<id[b];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	cin>>n;
	ll i;
	for (i=0;i<n-1;i++)
	{
		ll x,y;cin>>x>>y;
		adj[x].pb(y);adj[y].pb(x);
	}
	for (i=0;i<n;i++)
	{
		cin>>a[i];
		id[a[i]]=i;
	}
	for (i=1;i<=n;i++)
		sort(adj[i].begin(),adj[i].end(),compare);
	queue<ll> q;
	memset(vis,0,sizeof(vis));
	q.push(1);vis[1]=1;vll v;ll c=0;
	while (!q.empty())
	{
		ll nd=q.front();v.pb(nd);
		for (i=0;i<adj[nd].size();i++)
		{
			if (!vis[adj[nd][i]])
				vis[adj[nd][i]]=1,q.push(adj[nd][i]);
		}
		q.pop();
	}
	for (i=0;i<n;i++)
	{
		if (a[i]!=v[i]){
			c++;break;
		}
	}
	if (c==0)	cout<<"Yes"<<endl;
	else	cout<<"No"<<endl;
}
