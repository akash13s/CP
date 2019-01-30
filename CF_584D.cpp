//AUTHOR: *Akash Shrivastva*
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
ll num,flag=0;map<ll,ll> m;
ll isPrime(ll n)
{
    ll c=0,i;
    for (i=2;i*i<=n;i++)
    {
        if (n%i==0)
        {
            c++;break;
        }
    }
    if (c==0)   return 1;
    else    return 0;
}
void simpleSieve(ll limit, vector<ll> &prime) 
{ 
    // Create a boolean array "mark[0..n-1]" and initialize 
    // all entries of it as true. A value in mark[p] will 
    // finally be false if 'p' is Not a prime, else true. 
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
            if (isPrime(num-2*p))
            {
                cout<<3<<endl;
                cout<<p<<" "<<p<<" "<<num-2*p<<endl;
                flag=1;break;
            }
        } 
    } 
} 

// Prlls all prime numbers smaller than 'n' 
void segmentedSieve(ll n) 
{ 

    // Compute all primes smaller than or equal 
    // to square root of n using simple sieve 
    ll limit = floor(sqrt(n))+1; 
    vector<ll> prime; 
    simpleSieve(limit, prime); 
    if (flag)   return ;

    // Divide the range [0..n-1] in different segments 
    // We have chosen segment size as sqrt(n). 
    ll low = limit; 
    ll high = 2*limit; 

    // While all segments of range [0..n-1] are not processed, 
    // process one segment at a time 
    while (low < n) 
    { 
        if (high >= n) 
        high = n; 
        
        // To mark primes in current range. A value in mark[i] 
        // will finally be false if 'i-low' is Not a prime, 
        // else true. 
        bool mark[limit+1]; 
        memset(mark, true, sizeof(mark)); 

        // Use the found primes by simpleSieve() to find 
        // primes in current range 
        for (ll i = 0; i < prime.size(); i++) 
        { 
            // Find the minimum number in [low..high] that is 
            // a multiple of prime[i] (divisible by prime[i]) 
            // For example, if low is 31 and prime[i] is 3, 
            // we start with 33. 
            ll loLim = floor(low/prime[i]) * prime[i]; 
            if (loLim < low) 
                loLim += prime[i]; 

            /* Mark multiples of prime[i] in [low..high]: 
                We are marking j - low for j, i.e. each number 
                in range [low, high] is mapped to [0, high-low] 
                so if range is [50, 100] marking 50 corresponds 
                to marking 0, marking 51 corresponds to 1 and 
                so on. In this way we need to allocate space only 
                for range */
            for (ll j=loLim; j<high; j+=prime[i]) 
                mark[j-low] = false; 
        } 

        // Numbers which are not marked as false are prime 
        for (ll i = low; i<high; i++) {
            if (mark[i - low] == true) 
            {
                if (isPrime(num-2*i))
                {
                    cout<<3<<endl;
                    cout<<i<<" "<<i<<" "<<num-2*i<<endl;
                    flag=1;break;
                }
            }
        }
        if (flag)   break;

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
	cin>>num;
    if (isPrime(num))   
    {
        cout<<1<<endl;
        cout<<num<<endl;
    }
    else    segmentedSieve(num);
}
