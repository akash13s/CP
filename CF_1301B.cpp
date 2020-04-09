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
		ll a[n],i;
		vll v;
		for (i=0;i<n;i++){
			cin>>a[i];
			if (a[i]!=-1)
				v.pb(a[i]);
		}
		if (v.size()==0)	cout<<"0 0"<<endl;
		else 
		{
			ll mi,ma;
			mi=*min_element(v.begin(),v.end());
			ma=*max_element(v.begin(),v.end());
			ll ele=(mi+ma)/2;
			ll ans=INT_MIN;
			for (i=0;i<n;i++)	if (a[i]==-1) a[i]=ele;
			for (i=0;i<n-1;i++)
			{
				ans=max(ans, abs(a[i]-a[i+1]));
			}
			cout<<ans<<" "<<ele<<endl;
		}
	}
}