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
ll a[200005],n;
map<ll,ll> dp;
ll f(ll i)
{
	if (dp.find(i)!=dp.end())	return dp[i];
	if (i>=n)	return 0;
	dp[i]=max(a[i]+f(i+2),f(i+1));
	return dp[i];
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
	a[n];
	ll i;
	for (i=0;i<n;i++)	cin>>a[i];
	ll ans=f(0);
	cout<<ans<<endl;
}

