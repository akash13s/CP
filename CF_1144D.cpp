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
    ll a[n],i;map<ll,ll> m;
    for (i=0;i<n;i++)	cin>>a[i],m[a[i]]++;
    ll pi,c=0;
	for (i=0;i<n;i++)
	{
		if (m[a[i]]>c)	c=m[a[i]],pi=a[i];
	}
	ll ind;
	if (a[0]==pi)	ind=0;
	else
	{
		for (i=0;i<n;i++)
		{
			if (a[i]==pi)	{
				ind=i;
				break;
			}
		}
	}
	ll moves=n-m[pi],pos=ind;
	cout<<moves<<endl;
	if (moves>0){
	// cout<<pi<<endl;
	for (i=ind-1;i>=0;i--)
	{

		if (a[i]<pi){
			cout<<1<<" "<<i+1<<" "<<i+2<<endl;
		}
		else if (a[i]>pi)
		{
			cout<<2<<" "<<i+1<<" "<<i+2<<endl;
		}
	}
	pos=ind;
	for (i=ind+1;i<n;i++)
	{

			if (a[i]<pi)
			{
				cout<<1<<" "<<i+1<<" "<<i<<endl;
			}
			else if (a[i]>pi)
			{
				cout<<2<<" "<<i+1<<" "<<i<<endl;
			}
		
	}	
	}
}
