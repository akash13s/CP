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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n,m;cin>>n>>m;
	vll adj[n+1];ll vis[n+1];
	
	ll i;
	for (i=0;i<m;i++)
	{
		ll x,y;cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	memset(vis,0,sizeof(vis));
	ll mi=0,nd,u,child;
	for (i=1;i<=n;i++)
	{
		if (adj[i].size()>mi)
			mi=adj[i].size(),nd=i;
	}
	queue< ll > q;
	q.push(nd);
	vis[nd]=1;
	while (!q.empty())
	{
		u=q.front();
		q.pop();
		for (i=0;i<adj[u].size();i++)
		{
			child=adj[u][i];
			if (!vis[child])
			{
				q.push(child);
				vis[child]=1;
				if (u!=0)
					cout<<u<<" "<<child<<endl;
			}
		}
	}
}