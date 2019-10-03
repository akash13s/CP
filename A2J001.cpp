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
ll prime[1000003],a[1000003];
void sieve()
{
	ll i,j;
	for (i=0;i<1000003;i++)	prime[i]=1;

	for (i=2;i<1000003;i++)
	{
		if (prime[i])
		{
			for (j=2*i;j<1000003;j+=i)
				prime[j]=0;
		}
	}
	a[0]=a[1]=0;
	for (i=2;i<1000003;i++)	a[i]=a[i-1]+prime[i];

}
ll modularExponentiation(ll x,ll n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%M,n/2);
    else                             //n is odd
        return (x*modularExponentiation((x*x)%M,(n-1)/2))%M;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	sieve();
    ll t;cin>>t;
    while (t--)
    {
    	ll n,k;cin>>n>>k;
    	ll ans=modularExponentiation(k%M,a[n]);
    	cout<<ans<<endl;
    }
}