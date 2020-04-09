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
ll n,h[100003],dp[100003],k;
ll f(ll i)
{
	if (i>=n)	return 0;
	else if (dp[i]!=-1)	return dp[i];
	else
	{
		dp[i]=INT_MAX;
		ll j;
		for (j=1;j<=k;j++)
		{
			if (i+j<=n)	dp[i]=min(dp[i],abs(h[i]-h[i+j])+f(i+j));
		}
		return dp[i];
	}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    cin>>n>>k;
    h[n+1],dp[n+1];
    memset(dp,-1,sizeof(dp));
    ll i;
    for (i=1;i<=n;i++)	cin>>h[i];
    cout<<f(1)<<endl;
}