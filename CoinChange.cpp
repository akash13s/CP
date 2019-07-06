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
ll dp[303][303];
ll f(ll i,ll c,ll a[],ll n)
{
	if (c==0 and i<=n)	return 1;
	if ((c>0 and i==n) or (c<0 and i<=n))	return 0;
	if (dp[i][c]!=-1)	return dp[i][c];
	dp[i][c]=f(i,c-a[i],a,n)+f(i+1,c,a,n);
	return dp[i][c];
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
		ll a[n],i,j;
		for (i=0;i<n;i++)	cin>>a[i];
		ll m;cin>>m;
		dp[n+1][m+1];
		for (i=0;i<=n;i++)
			for (j=0;j<=m;j++)	
				dp[i][j]=-1;
		ll ans=f(0,m,a,n);
		cout<<ans<<endl;
	}
}
