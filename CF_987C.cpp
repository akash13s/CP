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
ll n,dp[3003][4],s[3003],cost[3003];
ll f(ll i,ll j,ll prev)
{
	if (dp[i][j]!=-1)
		return dp[i][j];
	if (i<=n){
	if (j==0)
			return 0;
	else
	{
		if (s[i]>prev)
			return dp[i][j]=min(cost[i]+f(i+1,j-1,s[i]),f(i+1,j,prev));
		else
			return dp[i][j]=cost[i]+f(i+1,2,s[i]);
	}
	}
	else
	{
		if (j==0)
			return 0;
		else return INT_MAX;
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
	ll i;
	for (i=1;i<=n;i++)
		cin>>s[i];
	for (i=1;i<=n;i++)
		cin>>cost[i];
	memset(dp,-1,sizeof(dp));
	ll p=f(1,3,0);
	if (p!=INT_MAX)
		cout<<p<<endl;
	else
		cout<<-1<<endl;
}