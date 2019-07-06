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
bool prime[1000001]; 
void SieveOfEratosthenes(ll n) 
{ 
    // Create a boolean array "prime[0..n]" and initialize 
    // all entries it as true. A value in prime[i] will 
    // finally be false if i is Not a prime, else true. 
    memset(prime, true, sizeof(prime)); 
  
    for (ll p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (ll i=p*p; i<=n; i += p) 
                prime[i] = false; 
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
	ll t;cin>>t;
	SieveOfEratosthenes(1000000);
	while (t--)
	{
		ll n;cin>>n;map<ll,ll> m;
		ll d[n],i;for (i=0;i<n;i++)	cin>>d[i],m[d[i]]=1;
		sort(d,d+n);
		ll ans=d[0];ll c=0;
		for (i=1;i<n;i++)
		{
			ans=(ans*d[i])/__gcd(ans,d[i]);
		}
		if (prime[ans])	cout<<2*ans<<endl;
		else if (ans>d[n-1])
		{
			for (i=2;i*i<=ans;i++)
			{
				if (ans%i==0)
				{
					if (m[i] and m[ans/i])
						continue;
					else	{
						c++;break;	
					}
				}
			}
			if (c)	cout<<-1<<endl;
			else	cout<<ans<<endl;
		}
		else	cout<<-1<<endl;
	}
}
