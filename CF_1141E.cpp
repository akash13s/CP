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
ll h,n,a[200005],b[200005];
ll check(ll mid)
{
	ll x=mid/n;
	ll y=mid%n;
	if (h+x*a[n]+a[y]<=0)	return 1;
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
	cin>>h>>n;
	a[n+1],b[n+1];
	ll i;for (i=1;i<=n;i++)	cin>>b[i];
	a[1]=b[1];a[0]=0;
	for (i=2;i<=n;i++)	a[i]=a[i-1]+b[i];
	ll lb=1,up=pow(10,13),mid,c=0,ans;
	while (lb<=up)
	{
		mid=(lb+up)/2;
		// if ((lb+up)%2!=0)	mid--;
		if (check(mid))
			ans=mid,up=mid-1,c++;
		else	lb=mid+1;
	}
	if (c)	cout<<ans<<endl;
	else	cout<<-1<<endl;
}