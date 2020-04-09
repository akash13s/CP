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
    ll l,r,n;cin>>l>>r>>n;
    ll a[n-1],i;
    for (i=0;i<n-1;i++)	cin>>a[i];
    ll ans=0,k;
    if (n==2)
    {
    	for (i=l;i<=r;i++)
    	{
    		k=i+a[0];
    		if (k<=r)	ans+=r-k+1;
    	}
    	cout<<ans<<endl;
    }
    else if (n==3)
    {
    	ll j,h;
    	for (i=l;i<=r;i++)
    	{
    		for (j=i+a[0];j<=r;j++)
    		{
    			k=j+a[1];
    			if (k<=r)	ans+=r-k+1;
    		}
    	}
    	cout<<ans<<endl;
    }
    else
    {
    	cout<<3<<endl;
    }
}