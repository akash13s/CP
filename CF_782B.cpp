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
ll n,x[60005],v[60005];
pll v1;
double check(double  d)
{
	double ans=INT_MIN;ll i;
	for (i=0;i<n;i++)
		ans=max(ans,(double)((double)abs(d-v1[i].F)/(double)v1[i].S));
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
	cin>>n;
	x[n];v[n];
	ll i;
	for (i=0;i<n;i++)	cin>>x[i];
	for (i=0;i<n;i++)	cin>>v[i];
	
	for (i=0;i<n;i++)	v1.pb(mp(x[i],v[i]));
	sort(v1.begin(),v1.end());
	double lb=v1[0].F,up=v1[n-1].F;
	double mid,ans,m,l,r;
	for (i=1;i<=400;i++)
	{
		mid=(double)(lb+up)/2;
		m=check(mid);
		l=check(mid-0.0000001);
		r=check(mid+0.0000001);
		if (l>m)
			ans=m,lb=mid;
		else if (r>check(mid))
			ans=m,up=mid;
	}
	printf("%0.10lf\n",ans);
}
