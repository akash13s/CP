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
ll check(ll k,ll a[],ll n)
{
	ll i,sum=0;
	ll b[n+1];
	for (i=1;i<=n;i++)
		b[i]=a[i]+i*k;
	sort(b+1,b+n+1);
	for (i=1;i<=k;i++)
		sum+=b[i];
	return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n,s;cin>>n>>s;
	ll a[n+1],i;
	for (i=1;i<=n;i++)
		cin>>a[i];
	// sort(a+1,a+n+1);
	ll lb=1,up=n,cost,cnt=0,mid;
	while (lb<=up)
	{
		mid=(lb+up)/2;
		if (check(mid,a,n)<=s)
			cnt=mid,lb=mid+1;
		else
			up=mid-1;
	}
	cout<<cnt<<" "<<check(cnt,a,n)<<endl;
}

