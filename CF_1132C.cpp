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
ll check(ll l1,ll r1,ll l2,ll r2)
{
	if (l1<)
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n,q;cin>>n>>q;
	ll a[n+2],d[n+2],i;
	memset(d,0,sizeof(d));
	pll v;
	for (i=0;i<q;i++)
	{
		ll l,r;cin>>l>>r;
		v.pb(mp(l,r));
		d[l]+=1;d[r+1]-=1;
	}
	a[0]=0;
	for (i=1;i<=n;i++)
		a[i]=a[i-1]+d[i];
	ll o[n+1],t[n+1];
	o[0]=t[0]=0;
	if (a[1]<=1)	o[1]=1;
	else	o[1]=0;
	if (a[1]<=2)	t[1]=1;
	else	t[1]=0;

	for (i=2;i<=n;i++)
	{
		if (a[i]<=1)	o[i]=o[i-1]+1;
		else	o[i]=o[i-1];
	}
	for (i=2;i<=n;i++)
	{
		if (a[i]<=2)	t[i]=t[i-1]+1;
		else	t[i]=t[i-1];
	}
	ll j,l1,r1,l2,r2;
	for (i=0;i<q;i++)
	{
		for (j=0;j<q;j++)
		{
			if (i==j)	continue;
			else
			{
				l1=v[i].F,l2=v[j].F,r1=v[i].S,r2=v[j].S;
				check(l1,r1,l2,r2);
			}
		}
	}
}