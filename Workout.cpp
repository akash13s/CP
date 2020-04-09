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
vll v;
ll n,k;
ll check(ll mid)
{
	ll i,c=0,d;
	for (i=0;i<v.size();i++)
	{
		if (v[i]>mid)
		{
			d=v[i]-mid;
			if (d%mid!=0)	d=d/mid + 1;
			else	d=d/mid;
			c+=d;	
		}
	}
	if (c<=k)	return 1;
	else return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll t;cin>>t;
	ll h;
	for (h=1;h<=t;h++)
	{
		cin>>n>>k;
		ll a[n],i;
		v.clear();
		for (i=0;i<n;i++)	cin>>a[i];
		for (i=0;i<n-1;i++)	v.pb(a[i+1]-a[i]);
		sort(v.begin(),v.end());
		ll lb=1,up=v[v.size()-1],mid,ans=1;
		while (lb<=up)
		{
			mid=(lb+up)/2;
			if (check(mid))	ans=mid, up=mid-1;
			else	lb=mid+1;
		}
		cout<<"Case #"<<h<<": "<<ans<<endl;
	}
}