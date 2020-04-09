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
ll a[100000][3],dp[100000][3],n;
ll f(ll i,ll j)
{
	if (i>=n)	return 0;
	if (dp[i][j]!=-1)	return dp[i][j];
	if (j==0)
		dp[i][j]=max(f(i+1,1),f(i+1,2))+a[i][j];
	else if (j==1)	dp[i][j]=max(f(i+1,0),f(i+1,2))+a[i][j];
	else	dp[i][j]=max(f(i+1,0),f(i+1,1))+a[i][j];
	return dp[i][j];
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
    ll i,j;
    a[n][3],dp[n][3];
    for (i=0;i<n;i++)
    	for (j=0;j<3;j++)
    		cin>>a[i][j];
    memset(dp,-1,sizeof(dp));
    ll ans=max(f(0,0),max(f(0,1),f(0,2)));
    cout<<ans<<endl;
}