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
ll check(ll n,ll k)
{
	ll v=0,n1=n;
	while (n>0)
	{
		v+=min(n,k);
		n-=min(n,k);
		n-=n/10;
	}
	if (v*2>=n1)	return true;
	else	return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n;cin>>n;
	ll lb=1,up=n,ans=0;
	while (lb<=up)
	{
		ll mid=(lb+up)/2;
		if (check(n,mid))
			ans=mid,up=mid-1;
		else	lb=mid+1;
	}
	cout<<ans<<endl;
}
