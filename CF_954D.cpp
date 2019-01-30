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
vll adj[1003];
ll vis[1003];
void bfs(ll u,ll level[])
{
	vis[u]=1;
	queue<ll> q;
	q.push(u);ll nd,i;
	while (!q.empty())
	{
		nd=q.front();
		for (i=0;i<adj[nd].size();i++)
		{
			if (!vis[adj[nd][i]])
				vis[adj[nd][i]]=1,level[adj[nd][i]]=level[nd]+1,q.push(adj[nd][i]);
		}
		q.pop();
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
	ll n,m,s,d;cin>>n>>m>>s>>d;
	ll i,j;map<ll, map <ll,ll> > m1;
	for (i=0;i<m;i++)
	{
		ll x,y;cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
		m1[x][y]=1;m1[y][x]=1;
	}
	ll ds[n+1],dd[n+1];
	memset(vis,0,sizeof(vis));
	memset(ds,0,sizeof(ds));
	memset(dd,0,sizeof(dd));
	bfs(s,ds);
	memset(vis,0,sizeof(vis));
	bfs(d,dd);ll cnt=0;ll k=ds[d];
	// for (i=1;i<=n;i++)	cout<<ds[i]<<" "<<dd[i]<<endl;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			if (!m1[i][j] and i!=j)
			{
				if (ds[i]+1+dd[j]>=k and ds[j]+1+dd[i]>=k)	cnt++;
			}
		}
	}
	cout<<cnt/2<<endl;
}