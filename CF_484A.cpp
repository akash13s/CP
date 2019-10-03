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
ll popcount(ll x)
{
	ll cnt=0;
	while (x)
	{
		cnt+=x&1;
		x>>=1;
	}
	return cnt;
}
ll next(ll x)
{
	return x|(x+1);
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
    	ll l,r;cin>>l>>r;
    	ll i,j;
  		ll ans=l,ma=popcount(l);
    	for (i=l;i<=r;i=next(i))
    	{
    		j=popcount(i);
    		if (j>ma)	ma=j,ans=i;
    	}
    	cout<<ans<<endl;
    }
}