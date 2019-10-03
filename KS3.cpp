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
ll check(ll mid,ll i,ll a[],ll pre[],ll n,ll k)
{
	if (mid<i)
	{
		if (a[i]+mid*k-pre[mid]>0)	return 1;
		else	return 0;
	}
	else
	{
		if (a[i]+(mid-1)*k-(pre[mid]-a[i])>0)	return 1;
		else	return 0;
	}
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
    	ll n,k;cin>>n>>k;
    	ll a[n],i;
    	pll v1;
    	for (i=0;i<n;i++)
    		cin>>a[i],v1.pb({a[i],i});
    	sort(a,a+n);
    	sort(v1.begin(),v1.end());
    	ll pre[n],v[n];
    	pre[0]=a[0];
    	for (i=1;i<n;i++)	pre[i]=pre[i-1]+a[i];
    	ll k1,lb,up,mid,r,ans;
    	for (i=0;i<n;i++)
    	{
    		lb=0,up=n-1,ans=0;
    		while (lb<=up)
    		{
    			mid=(lb+up)/2;
    			r=check(mid,i,a,pre,n,k);
    			if (r)
    			{
    				if (mid<i)	ans=mid+1;
    				else	ans=mid;
    				lb=mid+1;
    			}
    			else
    			{
    				up=mid-1;
    			}
    		}
    		v[v1[i].S]=ans;
    	}
    	for (i=0;i<n;i++)	cout<<v[i]<<" ";
    	cout<<"\n";
    }
}