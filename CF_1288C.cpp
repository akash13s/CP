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
ll n,m,dp[21][1000];
ll f(ll i,ll j)
{
	if (dp[i][j]!=-1)	return dp[i][j];
	else if (i==2*m-1)	return 1;
	else
	{
		dp[i][j]=0;
		ll k;
		for (k=j;k<=n;k++)
			dp[i][j]+=f(i+1,k)%M;
		return dp[i][j]%M;
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
	cin>>n>>m;
	dp[2*m+1][n];
	memset(dp,-1,sizeof(dp));
	ll i,ans=0;
	for (i=1;i<=n;i++)	ans+=f(0,i)%M;
	cout<<ans%M<<endl;
}