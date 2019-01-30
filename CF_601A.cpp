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
ll n,m;
ll dij(vll v[])
{
	ll dis[n+1],vis[n+1],i;
	for (i=0;i<=n;i++)	dis[i]=INT_MAX;
	memset(vis,0,sizeof(vis));
	priority_queue< PII > pq;
	dis[1]=0;
	pq.push({-dis[1],1});
	while (!pq.empty())
	{
		ll nd=pq.top().S;
		pq.pop();
		if (nd==n)	break;
		for (i=0;i<v[nd].size();i++)
		{
			ll node=v[nd][i];
			if (!vis[node] and dis[nd]+1<dis[node])
				dis[node]=dis[nd]+1,pq.push({-dis[node],node});
		}
		vis[nd]=1;
	}
	return dis[n];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	cin>>n>>m;
	vll adj1[n+1],adj2[n+1];
	ll i,j;
	for (i=0;i<m;i++)
	{
		ll x,y;cin>>x>>y;
		adj1[x].pb(y);
		adj1[y].pb(x);
	}
	for (i=1;i<=n;i++)
		sort(adj1[i].begin(),adj1[i].end());
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			if (i==j)	continue;
			else
			{
				if (!binary_search(adj1[i].begin(),adj1[i].end(),j))
					adj2[i].pb(j);
			}
		}
	}

	ll ans=max(dij(adj1),dij(adj2));

	if (ans==INT_MAX)	cout<<-1<<endl;
	else	cout<<ans<<endl;
}
