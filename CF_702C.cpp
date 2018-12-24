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
ll fun(ll x,ll a[],ll n)
{
	ll lb=0,up=n-1,ans=INT_MAX,mid,d;
	while (lb<=up)
	{
		mid=(lb+up)/2;
		d=abs(a[mid]-x);
		if (a[mid]>x)
		{
			if (d<ans)	ans=d;
			up=mid-1;
		}
		else if (a[mid]<x)
		{
			if (d<ans)	ans=d;
			lb=mid+1;
		}
		else
		{
			ans=0;break;
		}
	}
	return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n,m;cin>>n>>m;
	ll a[n],b[m],i;
	for (i=0;i<n;i++)
		cin>>a[i];
	for (i=0;i<m;i++)
		cin>>b[i];
	ll p;vll v;
	for (i=0;i<n;i++)
	{
		p=fun(a[i],b,m);
		v.pb(p);
	}
	cout<<*max_element(v.begin(),v.end())<<endl;
}
