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
    ll n,m,h;cin>>n>>h>>m;
    ll a[n+1],i;
    for (i=1;i<=n;i++)	a[i]=h;
    ll s=0;
    while (m--)
    {
    	ll l,r,x;cin>>l>>r>>x;
    	for (i=l;i<=r;i++)
    	{
    		if (a[i]>=x)	a[i]=x;
    	}
    }
    for (i=1;i<=n;i++)	s+=a[i]*a[i];
    cout<<s<<endl;
}
