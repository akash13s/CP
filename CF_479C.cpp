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
bool fun(PII a,PII b)
{
	if (a.F==b.F)	return a.S<b.S;
	else	return a.F<b.F;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n,i;cin>>n;
	pll v;
	for (i=0;i<n;i++)
	{
		ll x,y;cin>>x>>y;
		v.pb(mp(x,y));
	}
	sort(v.begin(),v.end());
	sort(v.begin(),v.end(),fun);
	ll prev=v[0].S,c=0;
	for (i=1;i<n;i++)
	{
		if (v[i].S>=prev)
			prev=v[i].S;
		else	
			prev=v[i].F;
	}
	cout<<prev<<endl;
}