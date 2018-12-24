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
ll dp[1005][1005];
ll fun(ll n,ll c,ll coin[],ll val[])
{
	if (dp[n][c]!=-1)
		return dp[n][c];
	if (n<=0 and c!=0)
		return INT_MAX;
	if (n!=0 and c<=0)
		return 0;
	else
		return dp[n][c]=min(val[n-1]+fun(n,c-coin[n-1],coin,val),fun(n-1,c,coin,val));

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	ll n,m,a,b;
	cin>>n>>m>>a>>b;
	ll coin[2]={m,1};
	ll val[2]={b,a};
	memset(dp,-1,sizeof(dp));
	cout<<fun(2,n,coin,val)<<endl;
}
