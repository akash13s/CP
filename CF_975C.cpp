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
	ll n,q;cin>>n>>q;
	ll a[n],i;
	for (i=0;i<n;i++)
		cin>>a[i];
	for (i=1;i<n;i++)
		a[i]=a[i]+a[i-1];
	ll prev=0,ans;
	while (q--)
	{
		ll k;cin>>k;
		if (binary_search(a,a+n,prev+k))
			ans=n-(lower_bound(a,a+n,prev+k)-a)-1;
		else
			ans=n-(lower_bound(a,a+n,prev+k)-a);
		prev+=k;
		if (ans==0)
			prev=0,cout<<n<<endl;
		else
			cout<<ans<<endl;
	}
}
