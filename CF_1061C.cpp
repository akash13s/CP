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
	ll n;cin>>n;
	ll a[n+1],i,j;
	ll dp[n+1];
	memset(dp,0,sizeof(dp));
	dp[0]=1;
	for (i=1;i<=n;i++){
		cin>>a[i];
	}
	for (i=1;i<=n;i++){
		vll v;
		for (j=1;j*j<=a[i];j++)
		{
			if (a[i]%j==0)
			{
				v.pb(j);
				if (j!=a[i]/j and a[i]/j<=i)
					v.pb(a[i]/j);
			}
		}

		sort(v.begin(),v.end());
		reverse(v.begin(),v.end());
		// for (j=0;j<v.size();j++)
		// 	cout<<v[j]<< " "; 
		for (j=0;j<v.size();j++)
			dp[v[j]]+=dp[v[j]-1],dp[v[j]]%=M;
	}
	ll ans=0;
	for (i=1;i<=n;i++)
		ans+=dp[i],ans%=M;
	cout<<ans<<endl;
}
