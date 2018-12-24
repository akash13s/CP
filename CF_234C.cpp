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
ll n,a[100005],dp[100005][3];
ll fun(ll i,ll s)
{
	if (i>0){
	if (dp[i][s]!=-1)
		return dp[i][s];
	ll s1;
	if (a[i-1]<0)	s1=2;
	else if (a[i-1]>0)	s1=1;
	else	s1=0;

	if (s<0 and s1>0)
		return dp[i][s]=1+fun(i-1,s1);
	else if (s==0)
		return dp[i][s]=1+fun(i-1,s1);
	else
		return dp[i][s]=fun(i-1,s1);
	}
	else	return 0;
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
    a[n];ll i;
    for (i=0;i<n;i++)
    	cin>>a[i];
    memset(dp,-1,sizeof(dp));
    ll p;
    if (a[n-1]>0)
    	p=fun(n-1,1);
    else if (a[n-1]<0)
    	p=fun(n-1,2);
    else
    	p=fun(n-1,0);
    if (!(a[0]<0))
    	p++;
    cout<<p<<endl;
}
