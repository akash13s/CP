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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll i,f[11];
    f[0]=f[1]=1;
    for (i=2;i<=10;i++)	f[i]=f[i-1]*i;
    ll t;cin>>t;
    while (t--)
    {
    	ll n;cin>>n;
    	ll a[n],s=0;
    	for (i=1;i<=n;i++)
    		s+=n-i;
    	ll ans=f[n]*s;
    	cout<<ans<<endl;
    }
}