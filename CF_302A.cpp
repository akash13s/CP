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
	
	ll n,m;cin>>n>>m;
	ll a[n],i;
	for (i=0;i<n;i++)	cin>>a[i];
	ll pos=0,neg=0;
	for (i=0;i<n;i++)
	{
		if (a[i]==1)	pos++;
		else	neg++;
	}
	while (m--)
	{
		ll l,r;cin>>l>>r;
		ll len=r-l+1;
		if (len%2==1)	cout<<0<<endl;
		else{
			if (len/2<=min(pos,neg))	cout<<1<<endl;
			else	cout<<0<<endl;
		}
	}
}
