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
ll a[200001],f[200001],n,k;
ll check(ll mid)
{
	ll i,c=0;
	for (i=0;i<n;i++)
	{
		if (a[i]*f[i]>mid)	c+=a[i]-mid/f[i];
	}
	if (c<=k)	return 1;
	else	return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    cin>>n>>k;
    a[n];f[n];ll i;
    for (i=0;i<n;i++)	cin>>a[i];
    for (i=0;i<n;i++)	cin>>f[i];
    sort(a,a+n);
	sort(f,f+n);reverse(f,f+n);
    ll lb=0,up=pow(10,12),ans,mid,cnt;
	while (lb<=up)
	{
		mid=(lb+up)/2;
		if (check(mid))	ans=mid,up=mid-1;
		else	lb=mid+1;
	}
	cout<<ans<<endl;
}