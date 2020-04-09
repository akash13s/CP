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

vector< pair<ll,double> > adj[100003];
ll vis[100003];
double dist[100003];
double dijikstra(ll st,ll e)
{
	multiset< pair<double,ll> > s;
	s.insert({0.0,st});
	ll i,u,v;
	dist[st]=0.0;
	while (!s.empty()) 
	{
		u=(*s.begin()).S;
		// double w=*s.begin().F;
		s.erase(s.begin());
		if (vis[u])	continue;
		vis[u]=1;
		for (i=0;i<adj[u].size();i++)
		{
			double wt=adj[u][i].S;
			v=adj[u][i].F;
			if (dist[u]+wt<dist[v])
				dist[v]=dist[u]+wt,s.insert({dist[v],v});
		}
	}
	return dist[e];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll t;cin>>t;
	while (t--)
	{
		ll n,m,s,e;cin>>n>>m>>s>>e;
		adj[n+1];vis[n+1];dist[n+1];
		ll i;
		for (i=0;i<=n;i++)	adj[i].clear(),dist[i]=1e18,vis[i]=0;
		for (i=0;i<m;i++)
		{
			ll x,y;double len,sp;
			cin>>x>>y>>len>>sp;
			double r=len/sp;
			adj[x].pb({y,r});
			adj[y].pb({x,r});
		}
		double ans=dijikstra(s,e);
		if (ans==1e18)	printf("-1\n");
		else printf("%0.10lf\n",ans);
	}
}