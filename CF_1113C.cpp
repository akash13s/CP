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
ll n;ll a[300005];
ll c=0;
ll check(ll l,ll r,ll mid)
{
	ll i,xl=0,xr=0;
	for (i=l;i<=mid;i++)	xl^=a[i];
	for (i=mid+1;i<=r;i++)	xr^=a[i];
	if (xl==xr)	return 1;	else	return 0;
}
void call(ll l,ll r,ll mid)
{
	if (l>r)	return ;
	if ((r-l+1)%2==0)	return ;
	mid=(l+r)/2;
	if (check(l,r,mid))	c++;
	if (check(l,mid,(l+mid)/2))	c++;
	if (check(mid,r,(mid+r)/2))	c++;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	cin>>n;
	a[n+1];ll i;for (i=1;i<=n;i++)	cin>>a[i];
	call(1,n,(1+n)/2);
	cout<<c<<endl;
}