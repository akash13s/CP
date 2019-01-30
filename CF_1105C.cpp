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
#define PII pair <ll,ll>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n,l,r;cin>>n>>l>>r;
	ll dp[n+1][3];memset(dp,0,sizeof(dp));
	ll x0,x1,x2,k,i;
	x0=r/3-l/3;
	if (l%3==0) x0++;
	k=r-l+1-x0;
	if (k%2==0)	x1=x2=k/2;
	else
	{
		if (l%3==1)	x1=k-k/2,x2=k/2;
		else	x2=k-k/2,x1=k/2;
	}
	dp[0][0]=x0,dp[0][1]=x1,dp[0][2]=x2;
	for (i=1;i<n;i++)
	{
		dp[i][0]=((dp[i-1][0]*x0)%M+(dp[i-1][1]*x2)%M+(dp[i-1][2]*x1)%M)%M;
		dp[i][1]=((dp[i-1][0]*x1)%M+(dp[i-1][1]*x0)%M+(dp[i-1][2]*x2)%M)%M;
		dp[i][2]=((dp[i-1][0]*x2)%M+(dp[i-1][1]*x1)%M+(dp[i-1][2]*x0)%M)%M;
	}	
	cout<<dp[n-1][0]<<endl;
}