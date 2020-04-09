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
    ll n,q;cin>>n>>q;
    ll a[n],i;
    for (i=0;i<n;i++)	cin>>a[i];
    while (q--)
    {
    	ll l,r,d;cin>>l>>r>>d;
    	l--,r--;
    	ll ans=1,c=1;
    	for (i=l+1;i<=r;i++)
    	{
    		if (a[i]-a[i-1]==d)	c++;
    		else	ans=max(ans,c),c=1;
    	}
    	ans=max(ans,c);
    	cout<<ans<<endl;
    }
}