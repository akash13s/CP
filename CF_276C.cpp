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
	ll a[n],b[n+1],i;
	for (i=0;i<n;i++)	cin>>a[i];
	memset(b,0,sizeof(b));
	while (q--)
	{
		ll x,y;cin>>x>>y;
		x--;y--;
		b[x]++;b[y+1]--;
	}
	for (i=1;i<=n;i++)	b[i]=b[i]+b[i-1];
	sort(a,a+n);reverse(a,a+n);
	sort(b,b+n+1);reverse(b,b+n+1);
	ll s=0;
	for (i=0;i<n;i++)
		s+=a[i]*b[i];
	cout<<s<<"\n";
}