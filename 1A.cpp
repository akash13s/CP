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
	ll a[n],b[n],i;
	for (i=0;i<n;i++)	cin>>a[i];
	sort(a,a+n);
	for (i=0;i<n;i++)
	{
		if (binary_search(a,a+n,(-1)*a[i]))
			b[i]=0;
		else
			b[i]=1;
	}
	ll c[n];
	c[n-1]=0;
	for (i=n-2;i>=0;i--)
	{
		if (b[i+1])	c[i]=c[i+1]+1;
		else	c[i]=c[i+1];
	}
	ll s=0;
	for (i=0;i<n;i++)
	{
		if (c[i]>=3 and a[i]>0)	s+=a[i],s%=M;
	}
	cout<<s%M<<endl;
}
