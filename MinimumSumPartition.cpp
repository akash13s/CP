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
ll a[101],dp[101][2501],sum,n;
ll f(ll i,ll s)
{
	if (i==n)	return abs(abs(sum-s)-s);
	if (dp[i][s]!=-1)	return dp[i][s];
	dp[i][s]=min(f(i+1,s+a[i]),f(i+1,s));
	return dp[i][s];
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
	while (t--)
	{
		cin>>n;
		ll i;
		sum=0;
		for (i=0;i<n;i++)	cin>>a[i],sum+=a[i];
		dp[n][sum];
		memset(dp,-1,sizeof(dp));
		ll ans=f(0,0);
		cout<<ans<<"\n";
	}
}
