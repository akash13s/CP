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
ll n,vis[2002],level[2002];
vll adj[2002];
void dfs(ll u)
{
	vis[u]=1;
	ll i,child;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		if (vis[child]==-1){
			level[child]=level[u]+1;
			dfs(child);
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
    cin>>n;
    ll i;vll v;
    adj[n+1];vis[n+1];level[n+1];
    for (i=1;i<=n;i++)
    {
    	ll x;cin>>x;
    	if (x!=-1)
    		adj[i].pb(x),adj[x].pb(i);
    	else	v.pb(i);
    }
    memset(vis,-1,sizeof(vis));
    memset(level,0,sizeof(level));
    for (i=0;i<v.size();i++)
    {
    	level[v[i]]=1;
    	dfs(v[i]);
    }
   
    ll ans=*max_element(level,level+n+1);
    cout<<ans<<"\n";
}