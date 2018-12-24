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
ll dp[1000][1000];
ll sum(ll s,ll e,ll a[])
{
	ll i,sum=0;
	for (i=s;i<=e;i++)
	{
		sum+=a[i];
		sum%=100;
	}
	return sum;
}
ll mix(ll i,ll j,ll a[])
{
	if (dp[i][j]!=-1)
		return dp[i][j];
	if (i>=j)
		return 0;
	ll k;
	dp[i][j]=INT_MAX;
	for (k=i;k<=j;k++)
		dp[i][j]=min(dp[i][j],mix(i,k,a)+mix(k+1,j,a)+sum(i,k,a)*sum(k+1,j,a));
	return dp[i][j]; 	
}

int main()
{
	//whenever reading EOF,don't use ios sync with base stdio statement
	
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n;
	while (scanf("%lld",&n)!=EOF)
	{
		ll a[n],i,j;
		for (i=0;i<n;i++)
			cin>>a[i];
		memset(dp,-1,sizeof(dp));
		ll p=mix(0,n-1,a);
		cout<<p<<endl;
	}	
}
