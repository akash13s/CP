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
ll dp[100005][2];
ll f(ll i,ll p,ll n,ll c[],ll k)
{
	if (dp[i][p]!=-1)
		return dp[i][p];
	if (i>n)
		return 0;
	if (p==0)
		return dp[i][p]=max(c[i]+f(i+1,1,n,c,1),max(c[i]+c[i+1]+f(i+2,1,n,c,2),c[i]+c[i+1]+c[i+2]+f(i+3,1,n,c,3)));
	else if (p==1)
	{
		if (k==1)	return dp[i][p]=f(i+1,0,n,c,0);
		else if (k==2)	return dp[i][p]=f(i+2,0,n,c,0);
		else if (k==3) return dp[i][p]=f(i+3,0,n,c,0);
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
	ll t;cin>>t;
	while (t--)
	{
		ll n;cin>>n;
		ll i,c[n+5];
		memset(c,0,sizeof(c));
		for (i=1;i<=n;i++)
			cin>>c[i];
		memset(dp,-1,sizeof(dp));
		cout<<f(1,0,n,c,0)<<endl;
	}
}
