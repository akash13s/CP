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
ll dp[100009];
ll f(ll i,ll n,ll c[])
{
	if (dp[i]!=-1)
		return dp[i];
	if (i>n)
		return 0;
	return dp[i]=max(c[i]+f(i+2,n,c),max(c[i]+c[i+1]+f(i+4,n,c),c[i]+c[i+1]+c[i+2]+f(i+6,n,c)));
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
		cout<<f(1,n,c)<<endl;
	}
}
