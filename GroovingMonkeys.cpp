#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define M 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

 //    #ifndef ONLINE_JUDGE
 //    freopen("input.txt", "r", stdin);
 //    freopen("output.txt", "w", stdout);
	// #endif
	ll t;cin>>t;
	while (t--)
	{
		ll n;cin>>n;
		ll a[n+1],i,j,c=1;
		for (i=1;i<=n;i++)	cin>>a[i];
		vector <ll> v;
		for (i=1;i<=n;i++)
		{
			j=i;
			while (i!=a[j])
			{
				c++;
				j=a[j];
			}
			v.push_back(c);c=1;
		}
		ll ans=1;
		for (i=0;i<v.size();i++)
			ans=(ans*v[i])/__gcd(ans,v[i]);
		cout<<ans<<endl;
	}
}
