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
ll n,k,a[100005],b[100005];
ll check(ll mid)
{
	ll i,c=k,flag=0;
	for (i=0;i<n;i++)
	{
		if (b[i]-a[i]*mid<0)
		{
			c-=a[i]*mid-b[i];
			if (c<0)
			{
				flag=1;break;
			}
		}
	}
	if (flag)	return 0;
	else	return 1;
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
	ll i;
	for (i=0;i<n;i++)	cin>>a[i];
	for (i=0;i<n;i++)	cin>>b[i];
	ll mi=INT_MAX;
	for (i=0;i<n;i++)	mi=min(mi,b[i]/a[i]);
	for (i=0;i<n;i++)
		b[i]-=a[i]*mi;
	ll lb=0,up=1000000000,mid,ans;
	while (lb<=up)
	{
		mid=(lb+up)/2;
		if (check(mid))	ans=mid,lb=mid+1;
		else	up=mid-1;
	}
	cout<<ans+mi<<endl;
}
