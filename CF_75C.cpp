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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    ll a,b;cin>>a>>b;
    ll n,d,i;cin>>n;
    d=__gcd(a,b);
    vll v;
    for (i=1;i*i<=d;i++)
    {
    	if (d%i==0)
    	{
    		v.pb(i);
    		if (i!=d/i)	v.pb(d/i);
    	}
    }
    sort(v.begin(),v.end());
    while (n--)
    {
    	ll l,r,mid;cin>>l>>r;
    	ll ans=-1,lb=0,up=v.size()-1;
    	while (lb<=up)
    	{
    		mid=(lb+up)/2;
    		if (v[mid]>=l and v[mid]<=r)
    		{
    			ans=v[mid];
    			lb=mid+1;
    		}
    		else
    		{
    			if (v[mid]<l)	lb=mid+1;
    			else	up=mid-1;
    		}
    	}
    	cout<<ans<<"\n";
    }
}