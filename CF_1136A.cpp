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
	ll l[n],r[n],i;
	for (i=0;i<n;i++)
	{
		cin>>l[i]>>r[i];
	}
	ll k,c=0;cin>>k;
	for (i=0;i<n;i++)
	{
		if (k>=l[i] and k<=r[i])
			c++;
		else if (l[i]>k)	c++;
	}
	cout<<c<<endl;
}