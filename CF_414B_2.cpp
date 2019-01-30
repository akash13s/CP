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
ll dp[2005][2005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n,k;cin>>n>>k;
	ll i,j,p,ans;
	memset(dp,0,sizeof(dp));
	for (i=1;i<=n;i++)	dp[k][i]=1;

	for (p=k-1;p>=1;p--)
	{
		for (i=1;i<=n;i++)
		{
			for (j=i;j<=n;j+=i)	dp[p][i]+=dp[p+1][j],dp[p][i]%=M;
		}
	}
	for (i=1;i<=n;i++)	ans+=dp[1][i],ans%=M;
	if (ans<0)	ans+=M;
	cout<<ans<<endl;
}