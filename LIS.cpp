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
	ll t;cin>>t;
	while (t--)
	{
		ll n;cin>>n;
		ll a[n],i,j;for (i=0;i<n;i++)	cin>>a[i];
		ll l[n];
		for (i=0;i<n;i++)	l[i]=1;
		for (i=1;i<n;i++)
		{
			for (j=0;j<i;j++)
			{
				if (a[i]>a[j])	l[i]=max(l[i],l[j]+1);
			}
		}
		cout<<*max_element(l,l+n)<<endl;
	}
}
