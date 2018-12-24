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
	ll a[3],i;
	for (i=0;i<3;i++)
		cin>>a[i];
	sort(a,a+3);ll ans=0;
	if (2*(a[0]+a[1])<=a[2])
		ans+=a[0]+a[1];
	else
		ans+=(a[0]+a[1]+a[2])/3;
	cout<<ans<<endl;
}
