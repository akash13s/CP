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
ll bit[10000005];
void update(ll i,ll x,ll size)
{
	while (i<=size)
	{
		bit[i]+=x;
		i+=i&(-i);
	}
}
ll getSum(ll i)
{
	ll s=0;
	while (i>0)
	{
		s+=bit[i];
		i-=i&(-i);
	}
	return s;
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
	while (t--)
	{
		ll n;cin>>n;
		ll a[n],i;
		for (i=0;i<n;i++)
			cin>>a[i];
		ll size=*max_element(a,a+n);
		ll bit[size+1];
		memset(bit,0,sizeof(bit));
		// for (i=0;i<n;i++)
		// 	cout<<a[i]<< " "; 
		ll k,ans=0;
		for (i=n-1;i>=0;i--)
		{
			k=getSum(a[i]-1);
			ans+=k;
			update(i,1,size);
		}
		// for (i=0;i<size;i++)
		// 	cout<<bit[i]<<endl;
		cout<<ans<<endl;
	}
}
