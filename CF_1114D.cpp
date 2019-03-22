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
ll n,dp[5001][5001];
ll a[5001];
ll f(ll l,ll r)
{
	if (l>=r)	return 0;
	if (dp[l][r]!=-1)	return dp[l][r];
	ll ans=min(f(l,r-1)+(a[r-1]!=a[r]),f(l+1,r)+(a[l]!=a[l+1]));
	if (a[l]==a[r])	ans=min(ans,f(l+1,r-1)+1);
	return dp[l][r]=ans; 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    cin>>n;
    ll i;for (i=0;i<n;i++)	cin>>a[i];
    dp[n][n];a[n];
    memset(dp,-1,sizeof(dp));
    ll k=f(0,n-1);
    cout<<k<<endl;
}