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
	ll j;
	for (j=1;j<=t;j++)
	{
		ll n,b;cin>>n>>b;
		ll a[n],i;
		for (i=0;i<n;i++)	cin>>a[i];
		ll s=0,c=0;
		sort(a,a+n);
		for (i=0;i<n;i++)
		{
			if (s+a[i]>b)	break;
			else	s+=a[i],c++;
		}
		cout<<"Case #"<<j<<": "<<c<<endl;
	}
}