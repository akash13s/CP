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
	ll n,k;cin>>n>>k;
	ll a[n],b[n],i,ans[n];
	for (i=0;i<n;i++)
		cin>>a[i],b[i]=a[i];
	sort(a,a+n);
	for (i=0;i<n;i++)
		ans[i]=lower_bound(a,a+n,b[i])-a;
	while (k--)
	{
		ll x,y;cin>>x>>y;
		if (b[x-1]>b[y-1])
			ans[x-1]--;
		else if (b[y-1]>b[x-1])
			ans[y-1]--;
	}
	for (i=0;i<n;i++)
		cout<<ans[i]<<" ";
}
