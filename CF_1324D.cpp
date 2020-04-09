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
	ll n;cin>>n;
	ll a[n],b[n],i;
	for (i=0;i<n;i++)	cin>>a[i];
	for (i=0;i<n;i++)	cin>>b[i];
	ll d[n],dn[n];
	for (i=0;i<n;i++)	d[i]=a[i]-b[i],dn[i]=b[i]-a[i];
	ll ans=0;
	multiset<ll> s; 
    ll countSmaller[n]; 
    for (i = n - 1; i >= 1; i--) { 
        s.insert(dn[i]); 
        auto it = s.lower_bound(d[i-1]); 
        countSmaller[i-1] = distance(s.begin(), it); 
        ans+=countSmaller[i-1];
    } 
  	
  	cout<<ans<<endl;
}	