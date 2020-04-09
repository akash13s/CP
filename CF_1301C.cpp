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
		ll n,m;cin>>n>>m;
		ll k,l,ans,k1;
		k=(n-m)/(m+1), l=(n-m)%(m+1);
		ans=n*(n+1),ans/=2;
		k1=k*(k+1),k1/=2,k1*=(m+1);
		ans-=(k1+l*(k+1));
		cout<<ans<<endl;
	}
}