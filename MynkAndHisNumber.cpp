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
double cubeRoot(ld n)
{
	ld l=0,r=n,mid,num;
	ll cnt=100;
	while (cnt--)
	{
		mid=(l+r)/2.0;
		num=mid*mid*mid;
		if (num>n)	r=mid;
		else	l=mid;
	}
	return l;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	ll t;cin>>t;
	ll a[1000001],i;
	a[1]=1;
	for (i=2;i<=1000000;i++)	a[i]=a[i-1]+(ll)cubeRoot((ld)i);
	while (t--)
	{
		ll n;cin>>n;
		cout<<a[n]<<endl;
	}
}
