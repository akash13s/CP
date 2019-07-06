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
		ll x,y,z;cin>>x>>y>>z;
		ll dp[n+1],i;
		memset(dp,(ll)-1,sizeof(dp));
		dp[0]=0;
		for (i=1;i<=n;i++)
		{
			if (i>=x and dp[i-x]!=-1)	dp[i]=max(dp[i],1+dp[i-x]);
			if (i>=y and dp[i-y]!=-1)	dp[i]=max(dp[i],1+dp[i-y]);
			if (i>=z and dp[i-z]!=-1)	dp[i]=max(dp[i],1+dp[i-z]);
		}
		if (dp[n]<0)	cout<<0<<endl;
		else	cout<<dp[n]<<endl;
	}
}
