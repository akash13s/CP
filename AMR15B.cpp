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
#define MAXN 100004
ll vis[MAXN],f[MAXN];

ll power(ll x,ll n)
{
	if (n==0)	return 1;
	else if (n%2==0)	return power((x*x)%M,n/2);
	else	return (x*power((x*x)%M,n/2))%M;
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
    	ll n;cin>>n;
    	ll a[n],i,j;
    	memset(vis,0,sizeof(vis));
    	memset(f,0,sizeof(f));
    	ll ans=1,ma=INT_MIN,k;
    	for (i=0;i<n;i++)	cin>>a[i],vis[a[i]]++,ma=max(ma,a[i]);
    	for (i=2;i<=ma;i++)
    	{
    		for (j=2*i;j<=ma;j+=i)
    		{
    			if (vis[j]) f[i]+=vis[j];	
    		}
    		if (vis[i])
    			k=(((power(2,vis[i])%M-1+M)%M)*(power(2,f[i])%M))%M;
    		else k=power(2,f[i])%M;
    			ans*=power(i,k),ans%=M;
    	}
    	cout<<ans%M<<endl;
    }
}