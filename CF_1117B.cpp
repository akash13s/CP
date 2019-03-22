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
	ll n,m,k;cin>>n>>m>>k;
	ll a[n],i;for (i=0;i<n;i++)	cin>>a[i];
	ll s=0,fl,sl;
	sort(a,a+n);
	fl=a[n-1],sl=a[n-2];
	ll c=0;
	ll c1=m/(k+1);s=c1*sl+(m-c1)*fl;
	cout<<s<<endl;
}