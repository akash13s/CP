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
ll check(ll mid, ll k, ll a[], ll m)
{
	ll i,s=0;
	ll partitions=k-1;
	for (i=m-1;i>=0;i--)
	{
		if (s+a[i]<=mid)
			s+=a[i];
		else	partitions--, s=a[i];
	}
	return (partitions>=0)?1:0;									
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
		ll m,k;cin>>m>>k;
		ll a[m],i,s=0;
		for (i=0;i<m;i++)	cin>>a[i],s+=a[i];
		ll lb=*max_element(a,a+m), up=s;
		ll mid,ans;
		while (lb<=up)
		{
			mid=(lb+up)/2;
			if (check(mid,k,a,m))
				ans=mid, up=mid-1;
			else	lb=mid+1;
		}
		s=0;
		ll  p=k-1;
		ll vis[m]={0};						
		// cout<<"ans : "<<ans<<endl;	
		for (i=m-1;i>=0;i--)
		{
			if (s+a[i]<=ans and i>=p)
				s+=a[i];
			else	s=a[i], vis[i]=1, p--;
		}
		for (i=0;i<m;i++)
		{
			cout<<a[i]<<" ";
			if (vis[i])	cout<<"/ ";
		}
		cout<<endl;
	}
}
