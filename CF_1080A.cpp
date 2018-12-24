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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n,k;cin>>n>>k;
	ll r=2*n,g=5*n,b=8*n;
	ll ans=0;
	ans+=r/k;ans+=g/k;ans+=b/k;
	if (r%k!=0)
		ans++;
	if (g%k!=0)
		ans++;
	if (b%k!=0)
		ans++;
	cout<<ans<<endl;
}
