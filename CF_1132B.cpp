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
	ll s=0;
	ll a[n],i;for (i=0;i<n;i++)	cin>>a[i],s+=a[i];
	ll m;cin>>m;
	ll q[m];
	for (i=0;i<m;i++)	cin>>q[i];
	sort(a,a+n);reverse(a,a+n);
	for (i=0;i<m;i++)
	{
		cout<<s-a[q[i]-1]<<endl;
	}
}