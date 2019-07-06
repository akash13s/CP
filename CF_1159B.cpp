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
	ll a[n],i,c=0;
	for (i=0;i<n;i++)	{cin>>a[i];if (a[i]==0)	c++;}
	if (c)	cout<<0<<endl;
	else
	{
		ll ans=INT_MAX;
		for (i=0;i<n;i++)
		{
			if (i==0 or i==n-1)	ans=min(ans,a[i]/(n-1));
			else ans=min(ans,min(a[i]/i,a[i]/(n-1-i)));
		}
		cout<<ans<<endl;
	}
}
