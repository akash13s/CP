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
vll adj[100005];ll vis[100005];
priority_queue<ll> pq;
void calc()
{
	pq.push(-1);ll nd,child,i;
	vis[1]=1;
	while (!pq.empty())
	{
		nd=pq.top();nd*=-1;
		cout<<nd<<" ";
		pq.pop();
		for (i=0;i<adj[nd].size();i++)
		{
			child=adj[nd][i];
			if (!vis[child])	vis[child]=1,pq.push(-child);
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
	adj[n+1];vis[n+1];
	for (i=0;i<m;i++)
	{
		ll x,y;cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	memset(vis,0,sizeof(vis));
	calc();
}