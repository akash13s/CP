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
ll n,dp[401][3][3];
ll f(ll i,ll j,ll k)
{
	if (dp[i][j][k]!=-1)	return dp[i][j][k];
	else if (i==n)	return 1;
	else if (k==0)
	{
		if (j==0)
			return dp[i][j][k]=f(i+1,1,1)%M+f(i+1,2,1)%M;
		else if (j==1)
			return dp[i][j][k]=f(i+1,0,1)%M+f(i+1,2,1)%M;
		else if (j==2)
			return dp[i][j][k]=f(i+1,0,1)%M+f(i+1,1,1)%M;
		else	return 0;
	}
	else if (k==1)
	{
		if (j==0)
			return dp[i][j][k]=f(i+1,j,k-1)%M+f(i+1,1,1)%M+f(i+1,2,1)%M;
		else if (j==1)
			return dp[i][j][k]=f(i+1,j,k-1)%M+f(i+1,0,1)%M+f(i+1,2,1)%M;
		else if (j==2)
			return dp[i][j][k]=f(i+1,j,k-1)%M+f(i+1,0,1)%M+f(i+1,1,1)%M;
		else	return 0;
	}
	else 
	{
		if (j==0)
			return dp[i][j][k]=f(i+1,j,k-1)%M+f(i+1,1,1)%M+f(i+1,2,1)%M;
		else if (j==1)
			return dp[i][j][k]=f(i+1,j,k-1)%M+f(i+1,0,1)%M+f(i+1,2,1)%M;
		else if (j==2)
			return dp[i][j][k]=f(i+1,j,k-1)%M+f(i+1,0,1)%M+f(i+1,1,1)%M;
		else	return 0;
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
	cin>>n;
	memset(dp,-1,sizeof(dp));
	ll ans=f(0,0,2)%M;
	cout<<ans%M<<endl;
}