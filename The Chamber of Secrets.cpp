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
ll f[1000001],n;
map<ll,ll> c;
ll check(ll x,ll y)
{
	if (x>=-n and x<=n and y>=-n and y<=n)	return 1;
	else	return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    ll m,q;cin>>n>>m>>q;
    ll i;
    memset(f,0,sizeof(f));
    for (i=0;i<m;i++)
    {
    	ll x,y;cin>>x>>y;
    	if (check(x,y) 	and check(x+1,y-1)){
    		ll ma=max(abs(x),abs(y));
    		ma=max(abs(x+1),ma);ma=max(ma,abs(y-1));
    		c[ma]++;
    	}
    }
    f[0]=0;
    for (i=1;i<=n;i++)
    {
    	f[i]=f[i-1]+4*(2*i-1)-c[i];
    }
    while (q--)
    {
    	ll t;cin>>t;
    	cout<<f[t]<<"\n";
    }
}