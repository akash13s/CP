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
    ll t;cin>>t;
    while (t--)
    {
    	ll n,k,d;cin>>n>>k>>d;
    	ll a[n],i;
    	for (i=0;i<n;i++)	cin>>a[i];
    	map<ll,ll> m;
    	for (i=0;i<d;i++)
    	{
    		m[a[i]]++;
    	}
    	ll ans=m.size();
    	
    	for (i=d;i<n;i++)
    	{
    		m[a[i-d]]--;
    		if (m[a[i-d]]==0)	m.erase(a[i-d]);
    		m[a[i]]++;
    		ans=min(ans,(ll)m.size());
    	}
    	cout<<ans<<"\n";
    }
}