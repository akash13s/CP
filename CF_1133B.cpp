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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n,k;cin>>n>>k;
	ll a[n],i;for (i=0;i<n;i++)	cin>>a[i];
	ll r[k];memset(r,0,sizeof(r));
	for (i=0;i<n;i++)
		r[a[i]%k]++;
	ll ans=0;
	if (k%2==0)
	{
		for (i=1;i<=(k-1)/2;i++)
			ans+=min(r[i],r[k-i])*2;
		ans+=(r[k/2]/2)*2;
	}
	else
	{
		for (i=1;i<=k/2;i++)
			ans+=min(r[i],r[k-i])*2;
	}
	ans+=(r[0]/2)*2;
	cout<<ans<<endl;
}