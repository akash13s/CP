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
	ll le[n],ri[n];
	le[n-1]=0;
	for (i=n-2;i>=0;i--)
	{
		if (a[i]<=a[i+1])
			le[i]=le[i+1]+1;
		else
			le[i]=0;
	}
	ri[0]=0;
	for (i=1;i<n;i++)
	{
		if (a[i]<=a[i-1])
			ri[i]=ri[i-1]+1;
		else	ri[i]=0;
	}
	while (m--)
	{
		ll l,r;cin>>l>>r;
		ll k=r-l-1;
		l--;r--;
		if (le[l]>=k or ri[r]>=k)	cout<<"Yes"<<endl;
		else	cout<<"No"<<endl;
		
	}
}