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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n,k;cin>>n>>k;
	string s;cin>>s;
	ll i,a[26],dp[n];
	memset(a,0,sizeof(a));
	dp[0]=1;
	for (i=1;i<n;i++)
	{
		if (s[i]==s[i-1])	dp[i]=dp[i-1]+1;
		else	dp[i]=1;
	}
	for (i=0;i<n;i++)
	{
		if (dp[i]>=k)	a[s[i]-'a']++,i+=k-1;
	}
	ll ans=0;
	for (i=0;i<26;i++)	ans=max(ans,a[i]);
	cout<<ans<<endl;
}