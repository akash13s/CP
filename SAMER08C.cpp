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
map <ll,ll> dp;
ll f(ll i,ll n,ll a[])
{
	if (dp[i]!=0)	return dp[i];
	if (i>=n)	return 0;
	return dp[i]=max(a[i]+f(i+2,n,a),f(i+1,n,a));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	while (1){
	ll m,n,i,j;cin>>m>>n;
	if (m==0 and n==0)	break;
	ll x[m];
	for (i=0;i<m;i++)
	{
		ll a[n];dp.clear();
		for (j=0;j<n;j++)
			cin>>a[j];
		x[i]=f(0,n,a);
	}
	dp.clear();
	ll ans=f(0,m,x);
	cout<<ans<<endl;
	}
}
