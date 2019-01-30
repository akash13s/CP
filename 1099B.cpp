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
	ld sq=sqrt(n);
	if (sq-floor(sq)==0)
		cout<<2*sqrt(n)<<endl;
	else
	{
		ll n1=sqrt(n);ll ans;
		if (n<=n1*n1+n1)	ans=2*n1+1;
		else	ans=2*n1+2;
		cout<<ans<<endl;
	}

}
