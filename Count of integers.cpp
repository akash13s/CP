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
#define MAXN 100000000
vll v;
void simpleSieve(ll limit, vector<ll> &prime) 
{ 
    bool mark[limit+1]; 
    memset(mark, true, sizeof(mark)); 
  
    for (ll p=2; p*p<limit; p++) 
    { 
        // If p is not changed, then it is a prime 
        if (mark[p] == true) 
        { 
            // Update all multiples of p 
            for (ll i=p*2; i<limit; i+=p) 
                mark[i] = false; 
        } 
    } 
  
    // Prll all prime numbers and store them in prime 
    for (ll p=2; p<limit; p++) 
    { 
        if (mark[p] == true) 
        { 
            prime.push_back(p); 
            v.pb(p);
        } 
    } 
} 
  
// Prlls all prime numbers smaller than 'n' 
void segmentedSieve(ll n) 
{ 
   
    ll limit = floor(sqrt(n))+1; 
    vector<ll> prime;  
    simpleSieve(limit, prime);  

    ll low = limit; 
    ll high = 2*limit; 
  
    while (low < n) 
    { 
        if (high >= n)  
           high = n; 
  
        bool mark[limit+1]; 
        memset(mark, true, sizeof(mark)); 
  
        for (ll i = 0; i < prime.size(); i++) 
        { 
          
            ll loLim = floor(low/prime[i]) * prime[i]; 
            if (loLim < low) 
                loLim += prime[i]; 
  
            
            for (ll j=loLim; j<high; j+=prime[i]) 
                mark[j-low] = false; 
        } 
  
        // Numbers which are not marked as false are prime 
        for (ll i = low; i<high; i++) 
            if (mark[i - low] == true) 
                v.pb(i);

        // Update low and high for next segment 
        low = low + limit; 
        high = high + limit; 
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
	segmentedSieve(MAXN);
    ll t;cin>>t;
    // cout<<v.size()<<endl;
    while (t--)
    {
    	ll n;cin>>n;
    	ll a[n],i,ans=0;
    	for (i=0;i<n;i++)	cin>>a[i];
    	for (i=0;i<n;i++)
    	{
    		if (binary_search(v.begin(),v.end(),a[i]))
    			ans++;
    	}
    	cout<<ans<<endl;
    }
}