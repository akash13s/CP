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
struct node
{
	ll l,r,nu;
};
bool compare(node i,node j)
{
	return (i.nu<j.nu);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	ll n,k,p;
	cin>>n>>k>>p;
	pll v,v1;ll i;
	for (i=0;i<n;i++){
		ll c;
		cin>>c;
		v.pb(mp(c,i+1));
		v1.pb(mp(i+1,c));
	}
	sort(v1.begin(),v1.end());
	sort(v.begin(),v.end());

	node arr[n];
	arr[n-1].r=0;arr[n-1].nu=v[n-1].S;
	for (i=n-2;i>=0;i--)
	{
		arr[i].nu=v[i].S;
		if (v[i+1].F-v[i].F<=k)
			arr[i].r=v[i+1].F-v[i].F+arr[i+1].r;
		else
			arr[i].r=0;
	}
	arr[0].l=0;
	for (i=1;i<n;i++)
	{
		if (v[i].F-v[i-1].F<=k)
			arr[i].l=v[i].F-v[i-1].F+arr[i-1].l;
		else
			arr[i].l=0;
	}
	sort(arr,arr+n,compare);
	while (p--)
	{
		if (n==1)
			cout<<"No\n";
		else{
		ll x,y;cin>>x>>y;
		ll mi=min(x,y)-1;ll ma=max(x,y)-1;
		if (arr[mi].r>=v1[ma].S-v1[mi].S || arr[ma].l>=v1[ma].S-v1[mi].S)
			cout<<"Yes\n";
		else
			cout<<"No\n";
		}
	}
}
