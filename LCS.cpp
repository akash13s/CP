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
ll dp[102][102];
ll f(ll i,ll j,string s1,string s2,ll m,ll n)
{
	if (i==m or j==n)	return 0;
	if (dp[i][j]!=-1)	return dp[i][j];
	if (s1[i]==s2[j])	dp[i][j]=1+f(i+1,j+1,s1,s2,m,n);
	else	dp[i][j]=max(f(i+1,j,s1,s2,m,n),f(i,j+1,s1,s2,m,n));
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
	while (t--)
	{
		ll m,n;cin>>m>>n;
		string s1,s2;cin>>s1>>s2;
		memset(dp,(ll)-1,sizeof(dp));
		ll ans=f(0,0,s1,s2,m,n);
		cout<<ans<<endl;
	}
}
