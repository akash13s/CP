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
vll adj[100005];
ll n,k,vis[100005],c=0;
ll modularExponentiation(ll x,ll n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%M,n/2);
    else                             //n is odd
        return (x*modularExponentiation((x*x)%M,(n-1)/2))%M;
}
void dfs(ll u)
{
	vis[u]=1;c++;
	ll child,i;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		if (!vis[child])
			dfs(child);
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
    cin>>n>>k;
    ll i;adj[n+1];vis[n+1];
    for (i=0;i<n-1;i++)
    {
    	ll x,y,w;cin>>x>>y>>w;
    	if (w==0)
    		adj[x].pb(y),adj[y].pb(x);
    }
    ll ans=0,ans1=0;
    ans+=modularExponentiation(n,k);
    for (i=1;i<=n;i++)
    {
    	if (!vis[i]){
    		c=0;
    		dfs(i);
    		ans1+=modularExponentiation(c,k);
    		ans1%=M;
    	}
    }
    ans=(ans%M-ans1%M+M)%M;
    cout<<ans<<endl;
}