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
ll n,k,p;
ll dp[51][1503],a[51][1503];
ll f(ll i,ll j)
{
	if (dp[i][j]!=-1)	return dp[i][j];
	if (i>=n or j>=p)	return 0;
	ll l,ans=0;
	for (l=0;l<k;l++){
		if (j+l+1<=p)
			ans=max(ans, a[i][l]+f(i+1,j+l+1));
	}
	ans=max(ans,f(i+1,j));
	dp[i][j]=ans;
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
	ll t;cin>>t;
	ll h;
	for (h=1;h<=t;h++)
	{
		cin>>n>>k>>p;
		ll i,j,x;
		memset(dp,-1,sizeof(dp));
		memset(a,0,sizeof(a));
		for (i=0;i<n;i++)
		{
			for (j=0;j<k;j++)
			{
				cin>>x;
				if (j==0)	a[i][j]=x;
				else	a[i][j]=a[i][j-1]+x;
			}
		}
		ll ans=f(0,0);
		cout<<"Case #"<<h<<": "<<ans<<endl;
	}
}