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
ll dp[2001][2001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n,k;cin>>n>>k;
	ll p,i,j,ans=0;

	for (i=1;i<=n;i++)	dp[1][i]=1;

	for (p=2;p<=k;p++)
	{
		for (i=1;i<=n;i++)
		{
			for (j=i;j<=n;j+=i){
				dp[p][j]+=dp[p-1][i];dp[p][j]%=M;
			}
		}
	}
	for (i=1;i<=n;i++){
		ans+=dp[k][i];ans%=M;
	}	
	cout<<ans<<endl;
	return 0;
	
}
