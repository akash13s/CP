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
	ll n;cin>>n;
	ll a[n],i,j;
	for (i=0;i<n;i++)	cin>>a[i];
	pll v;ll c=0;
	for (i=1;i<=100;i++)
	{
		c=0;
		for (j=0;j<n;j++)
		{
			if (abs(a[j]-i)<=1)	continue;
			else
			{
				if (a[j]<i)	c+=abs(a[j]-i+1);
				else	c+=abs(a[j]-i-1);
			}
		}
		v.pb(mp(c,i));
	}
	sort(v.begin(),v.end());
	cout<<v[0].S<<" "<<v[0].F<<endl;
}