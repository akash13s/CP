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
		ll n;cin>>n;
		ll a[n],i,odd=0,even=0;
		for (i=0;i<n;i++){
			cin>>a[i];
			if (a[i]%2==0)	even++;
			else	odd++;
		}
		if ((even>0 and odd==0) or (odd>0 and even==0))	cout<<"YES\n";
		else	cout<<"NO\n";	
	}
}