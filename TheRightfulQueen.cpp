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
	ll a[n],i,s=0;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
		s+=abs(a[i]);
	}
	sort(a,a+n);
	if (n==1)	cout<<a[0]<<endl;
	else
	{
		if (!(a[0]<=0 and a[n-1]>=0))	
			cout<<s-abs(a[0])-abs(a[n-1])+abs(a[0]-a[n-1])<<endl;
		else	cout<<s<<endl;
	}
}
