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
	ll n;cin>>n;
	ll i;vll v[n+1];
	for (i=0;i<2*n;i++)
	{
		ll x;cin>>x;
		v[x].pb(i);
	}
	ll ans=v[1][0]+v[1][1];
	for (i=2;i<=n;i++)
	{
		ans+=min(abs(v[i][0]-v[i-1][0])+abs(v[i][1]-v[i-1][1]),abs(v[i][0]-v[i-1][1])+abs(v[i][1]-v[i-1][0]));
	}
	cout<<ans<<endl;
}