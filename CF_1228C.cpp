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
ll modularExponentiation(ll x,ll n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%M,n/2)%M;
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
    ll x,n,i;cin>>x>>n;
    vll v;
    for (i=2;i*i<=x;i++)
    {
    	if (x%i==0){
    		v.pb(i);
    		while (x%i==0)
    			x/=i;
    	}
    }
    if (x>1)	v.pb(x);
    ll ans=1;
    for (i=0;i<v.size();i++)
    {
    	ll k=n,cnt=0;
    	while (k>0)
    	{
    		cnt+=k/v[i];
    		k/=v[i];
    	}
    	ans*=modularExponentiation(v[i],cnt);
    	ans%=M;
    }
    cout<<ans%M<<endl;
}