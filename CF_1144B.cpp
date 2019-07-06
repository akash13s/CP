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
    ll a[n],i;vll o,e;
    for (i=0;i<n;i++)
    {
    	cin>>a[i];
    	if (a[i]%2==0)	e.pb(a[i]);
    	else	o.pb(a[i]);
    }
    sort(e.begin(),e.end());
    sort(o.begin(),o.end());
    ll lo,le;lo=o.size();le=e.size();
    ll sm=0;
    if (le==lo)	sm=0;
    else
    {
    	ll d=abs(lo-le)-1;
    	if (lo>le)	
    		for (i=0;i<d;i++)	sm+=o[i];
    	else	for (i=0;i<d;i++)	sm+=e[i];
    }
    cout<<sm<<endl;
}
