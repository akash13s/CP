//AUTHOR: *Akash Shrivastva*
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define M 100000000
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define pll vector< pair <ll,ll> >
#define F first
#define S second
#define PII pair <ll,ll>
ll k1,k2;
ll dp[101][101][11][11];
ll f(ll n1,ll n2,ll a,ll b)
{
	if (dp[n1][n2][a][b]!=-1)	return dp[n1][n2][a][b];
	else if (n1+n2==0)	return 1;
	else{
		ll c1=0,c2=0;
		if (a<k1 and n1>0)	c1=f(n1-1,n2,a+1,0);
		if (b<k2 and n2>0)	c2=f(n1,n2-1,0,b+1);
		dp[n1][n2][a][b]=(c1%M+c2%M)%M;
		return dp[n1][n2][a][b];	
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
	ll n1,n2;
	cin>>n1>>n2>>k1>>k2;
	memset(dp,-1,sizeof(dp));
	ll ans=f(n1,n2,0,0)%M;
	cout<<ans<<endl;
}