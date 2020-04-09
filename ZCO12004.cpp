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
ll n,a[1000002],dp[1000002];
ll f(ll i)
{
	if (i>=n)	return 0;
	if (dp[i]!=-1)	return dp[i];
	dp[i]=a[i]+min(f(i+1),f(i+2));
	return dp[i];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    ll i;cin>>n;
    a[n];
    for (i=0;i<n;i++)	cin>>a[i];
    memset(dp,-1,sizeof(dp));
	ll a1=f(0);
	reverse(a,a+n);
	memset(dp,-1,sizeof(dp));
	ll a2=f(0);
	cout<<min(a1,a2)<<endl;
}