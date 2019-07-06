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
map< PII, ll > m;
ll dp[1001][1001];
ll check(ll i,ll s,ll a[],ll n)
{
	if (m[mp(i,s)])	return dp[i][s];
	m[mp(i,s)]=1;
	if (i==n and s!=0)	return 0;
	if (i<=n and s==0)	return 1;
	if (a[i]<=s)	dp[i][s]=check(i+1,s-a[i],a,n) or check(i+1,s,a,n);
	else	dp[i][s]=check(i+1,s,a,n);
	return dp[i][s];
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
		ll n;cin>>n;
		ll a[n],i,s=0;for (i=0;i<n;i++)	cin>>a[i],s+=a[i];
		if (s%2==1)	cout<<"NO"<<endl;
		else
		{
			s/=2;
			dp[n+1][s+1];
			ll j;
			for (i=0;i<=n;i++)
				for (j=0;j<=s;j++)
					dp[i][j]=0;
			m.clear();
			ll ans=check(0,s,a,n);
			if (ans)	cout<<"YES"<<endl;
			else	cout<<"NO"<<endl;
		}
	}
}
