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
ll a[2005],n;
void t1(ll ind,ll x)
{
	ll i;
	for (i=0;i<=ind;i++)
		a[i]+=x;
}
void t2(ll ind,ll x)
{
	ll i;
	for (i=0;i<=ind;i++)
		a[i]%=x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	ll i,j,d,c=0;cin>>n;
	a[n];
	for (i=0;i<n;i++)
		cin>>a[i];
	for (i=0;i<n-1;i++)
	{
		if (a[i]>=a[i+1])
		{
			c++;break;
		}
	}
	if (c>0)
	{
		vector < pair < ll, pair < ll,ll > > > v;
		if (a[n-1]<n-1)
		{
			d=n-1-a[n-1];
			v.pb(mp(1,mp(n-1+1,d)));
			t1(n-1,d);
		}
		v.pb(mp(2,mp(n-1+1,a[n-1]+1)));
		t2(n-1,a[n-1]+1);
		for (i=n-2;i>=0;i--)
		{
			if (a[i]<i)
			{
				d=a[i+1]-a[i];
				if (d==1)
				{
					v.pb(mp(2,mp(i+1,a[i]+1)));
					t2(i,a[i]+1);	
				}
				else
				{
					v.pb(mp(1,mp(i+1,d-1)));
					t1(i,d-1);
					v.pb(mp(2,mp(i+1,a[i]+1)));
					t2(i,a[i]+1);
				}
			}
			else
			{
				v.pb(mp(2,mp(i,a[i]+1)));
				t2(i,a[i]+1);
			}
		}
		if (a[0]>=a[1])
			v.pb(mp(2,mp(0+1,1)));
		cout<<v.size()<<endl;
		for (i=0;i<v.size();i++)
			cout<<v[i].F<<" "<<v[i].S.F<<" "<<v[i].S.S<<endl;
	}
	else	cout<<0<<endl;
}
