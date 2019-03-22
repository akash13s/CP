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
	ll a[n],i;
	for (i=0;i<n;i++)	cin>>a[i];
	ll ma=*max_element(a,a+n);
	ll l=1;ll b[n];if (a[0]==ma)	b[0]=1;else	b[0]=0;
	for (i=1;i<n;i++)
	{
		if (a[i]==ma)	b[i]=1+b[i-1];
		else	b[i]=0;
	}
	cout<<*max_element(b,b+n)<<endl;
}