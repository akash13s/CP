//AUTHOR: *Akash Shrivastva*
//Birla Institute of Technology,Mesra,India
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define pll vector< pair <ll,ll> >
#define F first
#define S second
#define PII pair <ll,ll>

ll f[100005],vis[100005];
vll adj[100005];
map<ll,ll> m;

ll power1(ll x,ll n,ll M)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return power1((x*x)%M,n/2,M);
    else                             //n is odd
        return (x*power1((x*x)%M,(n-1)/2,M))%M;

}
ll calc(ll n) 
{ 
	ll x = n; 

	// Make all bits set MSB 
	// (including MSB) 
	
	// This makes sure two bits 
	// (From MSB and including MSB) 
	// are set 
	n |= n >> 1; 

	// This makes sure 4 bits 
	// (From MSB and including MSB) 
	// are set 
	n |= n >> 2; 

	n |= n >> 4; 
	n |= n >> 8; 
	n |= n >> 16; 

	// Count set bits in toggled number 
	return __builtin_popcount(x ^ n); 
}
void dfs(ll nd)
{
	vis[nd]=1;
	m[nd]=f[nd];
	// cout<<m[nd]<<endl;
	ll i;
	for (i=0;i<adj[nd].size();i++)
	{
		if (vis[adj[nd][i]]==-1)
		{
			f[adj[nd][i]]*=f[nd];
			f[adj[nd][i]]%=1000000007;
			dfs(adj[nd][i]);
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
	ll n;cin>>n;
	ll a[n+1],i;
	for (i=1;i<=n;i++)	cin>>a[i];
	adj[n+1];vis[n+1];
	memset(vis,-1,sizeof(vis));
	for (i=1;i<n;i++)
	{
		ll x;cin>>x;
		adj[i+1].pb(x);
		adj[x].pb(i+1);
	}
	f[n+1];
	for (i=1;i<=n;i++)
	{
		ll k1=calc(a[i]);
		f[i]=power1(2,k1,1000000007);
		// cout<<f[i]<<endl;
	}
	// cout<<calc(7)<<endl;
	dfs(1);
	for (i=1;i<=n;i++)	cout<<m[i]<<" ";
	cout<<endl;
}
