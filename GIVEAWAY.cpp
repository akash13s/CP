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
ll n,arr[500005],rt;
vll v[710];
ll query(ll l,ll r,ll c)
{
	ll bno=l/rt,cnt=0,k,p;
	while (l<=r and l/rt==bno)
	{
		if (arr[l]>=c)	cnt++;
		l++;
	}
	while (l+rt<=r)
	{
		k=l/rt;
		p=v[k].size()-(lower_bound(v[k].begin(),v[k].end(),c)-v[k].begin());
		cnt+=p;
		l+=rt;
	}
	while (l<=r)
	{
		if (arr[l]>=c)	cnt++;
		l++;
	}
	return cnt;
}
void update(ll a,ll b)
{
	a--;
	ll bno=a/rt;
	ll temp=arr[a];
	ll ind=lower_bound(v[bno].begin(), v[bno].end(),temp)-v[bno].begin();
	v[bno][ind]=b;
	sort(v[bno].begin(),v[bno].end());
	arr[a]=b;
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
	arr[n];ll i;
	rt=ceil(sqrt(n));
	for (i=0;i<n;i++)	cin>>arr[i],v[i/rt].pb(arr[i]);
	ll q;cin>>q;
	for (i=0;i<710;i++)	sort(v[i].begin(),v[i].end());

	while (q--)
	{
		ll t;cin>>t;
		if (t==0)
		{
			ll a,b,c;cin>>a>>b>>c;
			cout<<query(a,b,c)<<"\n";
		}
		else
		{
			ll a,b;cin>>a>>b;
			update(a,b);
		}
	}
}