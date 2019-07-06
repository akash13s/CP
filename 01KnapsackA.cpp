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
		ll n,c;cin>>n>>c;
		ll p[n],w[n],i,j;
		for (i=0;i<n;i++)	cin>>p[i];
		for (i=0;i<n;i++)	cin>>w[i];
		ll dp[n+1][c+1];
		for (i=0;i<=n;i++)
		{
			for (j=0;j<=c;j++)
			{
				if (i==0 or j==0)	dp[i][j]=0;
				else if (w[i-1]<=j)	dp[i][j]=max(p[i-1]+dp[i-1][j-w[i-1]],dp[i-1][j]);
				else dp[i][j]=dp[i-1][j];
			}
		}
		cout<<dp[n][c]<<endl;
	}
}
