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
	ll n,i;cin>>n;
	ll a[n],o=0,t=0;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
		if (a[i]==1)	o++;
		else	t++;
	}
	if (t)	cout<<2<<" ",t--;
	if (o)	cout<<1<<" ",o--;
	while (t--)	cout<<2<<" ";
	while (o--)	cout<<1<<" ";
}
