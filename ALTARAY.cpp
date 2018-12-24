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
    	ll i,a[n];
    	for (i=0;i<n;i++)
    		cin>>a[i];
    	ll ans[n];
    	ans[n-1]=1;
    	for (i=n-2;i>=0;i--)
    	{
    		if (a[i]*a[i+1]<0)
    			ans[i]=1+ans[i+1];
    		else
    			ans[i]=1;
    	}
    	for (i=0;i<n;i++)
    		cout<<ans[i]<<" ";
    	cout<<endl;
    	
    	// #ifndef ONLINE_JUDGE
    	// cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    	// #endif
    }
}
