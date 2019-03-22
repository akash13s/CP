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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    ll n;cin>>n;
    adj[n+1];vis[n+1];
    ll i;
    for (i=0;i<n-1;i++)
    {
    	ll x,y;cin>>x>>y;
    	adj[x].pb(y);
    	adj[y].pb(x);
    }
    adj[0].pb(1);adj[1].pb(0);
    queue<ll> q;memset(vis,0,sizeof(vis));
    q.push(1);
    vis[1]=1;ll level[n+1],child;
    double p[n+1];
    ll nd;level[1]=0;double s=0.0;p[1]=1.0;
    while (!q.empty())
    {
    	nd=q.front();
    	q.pop();
    	if (adj[nd].size()-1==0 and (nd!=0 or nd!=1)) 	s+=p[nd]*level[nd];
    	for (i=0;i<adj[nd].size();i++)
    	{
    		child=adj[nd][i];
    		if (!vis[child] and child!=0)
    			vis[child]=1,level[child]=level[nd]+1,p[child]=(double)(p[nd]/(double)(adj[nd].size()-1)),q.push(child);
    	}
    }
   	printf("%0.16lf\n",s);
}