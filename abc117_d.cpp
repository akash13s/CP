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
    ll a[n],i,j;
    for (i=0;i<n;i++)	cin>>a[i];
    ll x=0,c=0;
	for (i=40;i>=0;i--)
	{
		c=0;
		for (j=0;j<n;j++)
		{
			if ((a[j]>>i)&1)	
				c++;
		}
		if (c*2<=n and (x+(1LL<<i))<=k)
			x+=1LL<<i;
	}
	ll ans=0;
	for (i=0;i<n;i++)	ans+=x^a[i];
	cout<<ans<<endl;
}