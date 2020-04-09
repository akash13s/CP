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
ll n,dp[1048577][21],MAX;
pll a,l;
ll f(ll mask,ll i)
{
	if (i>=n)
	{
		if (mask==MAX)	return 0;
		else return INT_MAX;
	}
	else if (dp[mask][i]!=-1)	return dp[mask][i];
	else
	{
		dp[mask][i]=INT_MAX;
		ll j,k;
		for (j=0;j<n;j++)
		{
			k=n-j-1;
			if (mask & (1<<k))	continue;
			else dp[mask][i]=min(dp[mask][i], f(mask|(1<<k),i+1)+abs(l[i].F-a[j].F)+abs(l[i].S-a[j].S));
		}
		return dp[mask][i];
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
	cin>>n;
	MAX=(1<<n)-1;
	ll i,x,y;
	dp[MAX+1][n+1];
	memset(dp,-1,sizeof(dp));
	for (i=0;i<n;i++)
	{
		cin>>x>>y;
		a.pb(mp(x,y));
	}
	for (i=0;i<n;i++)
	{
		cin>>x>>y;
		l.pb(mp(x,y));
	}
	cout<<f(0,0)<<endl;
}