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
ll dp[1001][1001];
ll f(ll i,ll c,ll p[],ll w[],ll n)
{
	if (i<=n and c<0)	return INT_MIN;
	else if (dp[i][c]!=-1)	return dp[i][c];
	else if ((c==0 and i<=n) or (c>0 and i==n)) return 0;
	else
	{
		dp[i][c]=max(p[i]+f(i+1,c-w[i],p,w,n),f(i+1,c,p,w,n));
		return dp[i][c];
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
		ll cap;cin>>cap;
		ll p[n],w[n],i,j;
		for (i=0;i<n;i++)	cin>>p[i];
		for (i=0;i<n;i++)	cin>>w[i];
		dp[n+1][cap+1];
		for (i=0;i<=n;i++)
			for (j=0;j<=cap;j++)
				dp[i][j]=-1;
		ll ans=f(0,cap,p,w,n);
		cout<<ans<<endl;
	}
}
