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
#define PII pair<ll,ll>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n,i;cin>>n;
	ll a[n],count[100001];
	memset(count,0,sizeof(count));
	for (i=0;i<n;i++){
		cin>>a[i];
		count[a[i]]++;
	}
	ll dp[100001];
	dp[0]=0,dp[1]=count[1];
	for (i=2;i<100001;i++)
	{
		dp[i]=max(dp[i-1],dp[i-2]+i*count[i]);
	}
	cout<<dp[100000]<<endl;

}
