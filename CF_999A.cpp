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
	ll n,k;cin>>n>>k;
	ll a[n],i;
	for (i=0;i<n;i++)	cin>>a[i];
	ll j=n-1,c=0;i=0;
	while (i<=j)
	{
		if (a[i]<=k)	c++,i++;
		else if (a[j]<=k)	c++,j--;
		else	break;
	}
	cout<<c<<endl;
}