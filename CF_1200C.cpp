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
	ll n,m,q;cin>>n>>m>>q;
	ll k=__gcd(n,m);
	ll a=n/k,b=m/k;
	while (q--)
	{
		ll sx,sy,ex,ey;cin>>sx>>sy>>ex>>ey;
		ll s,e;
		if (sx==1)
		{
			s=sy/a;
			if (sy%a!=0)	s++;
		}
		else
		{
			s=sy/b;
			if (sy%b!=0)	s++;
		}
		if (ex==1)
		{
			e=ey/a;
			if (ey%a!=0)	e++;
		}
		else
		{
			e=ey/b;
			if (ey%b!=0)	e++;
		}
		if (s==e)	cout<<"YES\n";
		else	cout<<"NO\n";
	}
}
