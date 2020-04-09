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
ll dp[20001][500],m,l,len;
string a;
ll f(ll i,ll n)
{

	if (i>=len)	return 0;
	else if (dp[i][n]!=-1)	return dp[i][n];
	else{
		dp[i][n]=f(i+1,(n*10+(a[i]-'0'))%m)+((n*10+(a[i]-'0'))%m==l);
		return dp[i][n];
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
    cin>>a;
    ll q;cin>>q;
    while (q--)
    {
    	cin>>m>>l;
    	len=a.length();
    	dp[len+1][m+1];
    	memset(dp,-1,sizeof(dp));
    	ll ans=0;
    	for (ll i=0;i<len;i++)
    		ans+=f(i,0);
    	cout<<ans<<"\n";
    }
}