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
vll adj[200004],adj1[200004];
ll vis[200004],n,m;
queue<PII> q;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    cin>>n>>m;
    adj[n+1];vis[n+1];adj1[n+1];
    memset(vis,0,sizeof(vis));
    for (i=0;i<m;i++)
    {
    	ll x,y;cin>>x>>y;
    	adj[x].pb(y);
    	adj[y].pb(x);
    }
    ll nd,child,v;
    q.push(mp(1,0));
    while (!q.empty())
    {
    	nd=q.front().F;v=q.front().S;
    	vis[nd]=1;
    	for (i=0;i<adj[nd].size();i++)
    	{
    		child=adj[nd][i];
    		if (!vis[child]){
    		if (v==0)	adj1[child].pb(nd),q.push(mp(child,1));
    		else	adj1[nd].pb(child),q.push(mp(child,0));
    		}
    	}
    }

    ll k=check();
    if ()
}
