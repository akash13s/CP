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
vll adj[200001];
ll vis[200001],f[200001];
ll c;
void dfs(ll u)
{
	vis[u]=1;
	f[u]=c;
	ll i;
	for (i=0;i<adj[u].size();i++)
	{
		if (vis[adj[u][i]]==-1)
			dfs(adj[u][i]);
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
    ll q;cin>>q;
    while (q--)
    {
    	ll n;cin>>n;
    	ll a[n+1],i;
    	adj[n+1];vis[n+1];f[n+1];
    	c=1;
    	memset(vis,-1,sizeof(vis));
    	memset(f,0,sizeof(f));
    	for (i=1;i<=n;i++)	adj[i].clear();
    	for (i=1;i<=n;i++)
    	{
    		cin>>a[i];
    		adj[i].pb(a[i]);
    	}
    	for (i=1;i<=n;i++)
    	{
    		if (vis[i]==-1){
    			dfs(i);
    			c++;
    		}
    	}
    	// for (i=1;i<=n;i++)	cout<<i<<" "<<f[i]<<endl;
    	ll cnt[n+2];
    	memset(cnt,0,sizeof(cnt));
    	for (i=1;i<=n;i++)
    		cnt[f[i]]++;
    	for (i=1;i<=n;i++)	cout<<cnt[f[i]]<<" ";
    	cout<<endl;
    }
}