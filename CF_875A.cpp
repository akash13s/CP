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
ll sum(ll n)
{
	ll d,s=0;
	while (n>0)
	{
		d=n%10;
		s+=d;
		n/=10;
	}
	return s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n,i,c=0;cin>>n;
	vll v;
	for (i=1;i<=min(n,(ll)99);i++)
	{
		if (sum(n-i)==i)
			c++,v.pb(n-i);
	}
	cout<<c<<endl;
	sort(v.begin(),v.end());
	for (i=0;i<v.size();i++)
		cout<<v[i]<<endl;
}
