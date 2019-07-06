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
	ll n,i;cin>>n;
	vll l,r;
	for (i=0;i<n;i++)
	{
		ll left,right;
		cin>>left>>right;
		l.pb(left);
		r.pb(right);
	}
	ll q;cin>>q;
	sort(l.begin(),l.end());
	sort(r.begin(),r.end());
	while (q--)
	{
		ll x;cin>>x;
		cout<<(upper_bound(l.begin(),l.end(),x)-l.begin())-(lower_bound(r.begin(),r.end(),x)-r.begin())<<endl;
	}
}
