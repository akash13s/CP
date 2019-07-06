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
	ll n,m,r;cin>>n>>m>>r;
	ll a[n],b[m],i;
	for (i=0;i<n;i++)	cin>>a[i];
	for (i=0;i<m;i++)	cin>>b[i];
	sort(a,a+n);sort(b,b+m);
	ll rem=r-(r/a[0])*a[0]+(r/a[0])*b[m-1];
	if (rem<r)	cout<<r<<endl;
	else	cout<<rem<<endl;
}
