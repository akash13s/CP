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

ll f(ll arr[], ll n) 
{ 
    unordered_map<ll, vector<ll> > map; 
    ll sum = 0; 
   
    for (ll i = 0; i < n; i++) 
    { 
        sum += arr[i]; 
        map[sum].push_back(i); 
    } 
    ll ma=0,k;
    for (auto it=map.begin();it!=map.end();it++)
    {
    	k= *(it->second.rbegin())  - *(it->second.begin());
    	ma=max(k,ma);
    	if (it->first == 0)	ma=max(ma,*it->second.begin() + 1);
    }
    // cout<<ma<<endl;
    ll ans=0;
    if (ma){
    	for (ll i=1;i<=ma-1;i++)
    	ans+=n-i+1;
    }
    else ans=(n*(n+1))/2;
    return ans;
} 
   
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n;cin>>n;
	ll a[n],i;
	for (i=0;i<n;i++)	cin>>a[i];
	ll ans = f(a, n); 
	cout<<ans<<endl;
}