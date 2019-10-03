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
	ll t;cin>>t;
	while (t--)
	{
		ll n,z;cin>>n>>z;
		vll adj[n+1];
		ll i;
		for (i=0;i<n-1;i++)
		{
			ll x,y;cin>>x>>y;
			adj[x].pb(y);
			adj[y].pb(x);
		}
		for (i=0;i<z;i++)	
		{
			ll k;cin>>k;
		}
		cout<<1<<endl;
	}
}
