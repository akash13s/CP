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
ll lcs(string x,string y,ll n)
{
	ll dp[n+1][n+1];
	ll i,j;
	for (i=0;i<=n;i++)
	{
		for (j=0;j<=n;j++)
		{
			if (i==0 or j==0)
				dp[i][j]=0;
			else if (x[i-1]==y[j-1])
				dp[i][j]=1+dp[i-1][j-1];
			else
				dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
		}
	}
	return dp[n][n];
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
		string s;cin>>s;
		string s1=s;
		ll n=s.length();
		reverse(s1.begin(),s1.end());
		ll p=lcs(s,s1,n);
		cout<<n-p<<endl;
	}
}
