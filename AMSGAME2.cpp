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
typedef pair <ll,ll> PII;
map <PII, ll> dp;
ll t,n;
ll fun(ll i,ll g,ll a[])
{
	if (i>=n)
	{
		if (g==1) return 1;
		else	return 0; 
	}
	PII key=mp(i,g);
	if (dp.find(key)!=dp.end())
		return dp[key];
	else
	{
		dp[key]=fun(i+1,g,a)+fun(i+1,__gcd(g,a[i]),a);
		return dp[key];
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
	
	cin>>t;
	while (t--)
	{
		cin>>n;
		ll i,a[n];
		for (i=0;i<n;i++)
			cin>>a[i];
		dp.clear();
		ll ans=0,p;
		for (i=0;i<n;i++)
		{
			p=fun(i,a[i],a);
			ans+=p;
		}
		cout<<ans/2<<endl;
	}
}
