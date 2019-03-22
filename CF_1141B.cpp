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
	ll a[2*n],b[n],i;
	for (i=0;i<n;i++)	{cin>>b[i];a[i]=b[i];}
	for (i=n;i<2*n;i++)	a[i]=b[i-n];
	// for (i=0;i<2*n;i++)	cout<<a[i]<<" ";
	ll c[2*n];
	if (a[0]==1)	c[0]=1;
	else	c[0]=0;
	for (i=1;i<2*n;i++)
	{
		if (a[i]==1 and a[i-1]==1)
			c[i]=c[i-1]+1;
		else if (a[i]==1 and a[i-1]==0)
			c[i]=1;
		else 	c[i]=0;
	}
	cout<<*max_element(c,c+2*n)<<endl;
}