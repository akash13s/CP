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
	ll n,m,k,l;cin>>n>>m>>k>>l;
	if (n<m)	cout<<"-1";
	else
	{
		ll x;
		x=(l+k)/m;
		if ((l+k)%m!=0)
			x++;
		if (x*m<=n)	cout<<x;
		else	cout<<-1;
	}
}