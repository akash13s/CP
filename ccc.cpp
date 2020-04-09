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
ll highestPowerof2(ll n) 
{ 
   ll p = (ll)log2(n); 
   return (ll)pow(2, p);  
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
    	ll n,b;
    	cin>>n>>b;
    	ll ans=0,k;
    	while (pow(2,b)<=n )
    	{
    		k=highestPowerof2(n);
    		ans+=k/2;
    		n-=k;
    	}
    	if (k>0)	ans++;
    	cout<<ans<<endl;
    }
}