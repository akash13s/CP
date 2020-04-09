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
#define MAX 750000
ll vis[MAX+1],f[MAX+1];
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
    	ll ans=0;
    	for (i=0;i<n;i++)	cin>>a[i],vis[a[i]]=1;
    	for (i=MAX;i>=1;i--)
    	{
    		if (vis[i]==1)
    		{
    			f[i]=1;
    			for (j=2*i;j<=MAX;j+=i)
    				f[i]+=f[j],f[i]%=M;
    			ans+=f[i];
    			ans%=M;
    		}
    	}
    	cout<<ans<<"\n";
    }
}