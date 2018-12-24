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
		ll i,a[n];
		for (i=0;i<n;i++)
			cin>>a[i];
		ll leftMax[n],leftMin[n],rightMax[n],rightMin[n];
		leftMax[0]=leftMin[0]=a[0];
		for (i=1;i<n;i++)
		{
			leftMax[i]=max(leftMax[i-1]+a[i],a[i]);
			leftMin[i]=min(leftMin[i-1]+a[i],a[i]);
		}
		rightMin[n-1]=rightMax[n-1]=a[n-1];
		for (i=n-2;i>=0;i--)
		{
			rightMax[i]=max(rightMax[i+1]+a[i],a[i]);
			rightMin[i]=min(rightMin[i+1]+a[i],a[i]);
		}
		ll ans=INT_MIN;
		for (i=0;i<n-1;i++)
		{
			ans=max(ans,abs(leftMax[i]-rightMin[i+1]));
			ans=max(ans,abs(leftMin[i]-rightMax[i+1]));
		}
		cout<<ans<<endl;
	}
}
