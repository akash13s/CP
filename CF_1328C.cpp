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
		ll n;string x;
		cin>>n;
		cin>>x;
		ll a[n],b[n],i;
		a[0]=b[0]=1;
		ll flag=0;
		for (i=1;i<n;i++)
		{
			if (x[i]=='0')
			{
				a[i]=b[i]=0;
			}
			else if (x[i]=='1')
			{
				if (flag)	a[i]=0, b[i]=1;
				else	flag++, a[i]=1, b[i]=0;
			}
			else
			{
				if (flag)	a[i]=0,b[i]=2;
				else	a[i]=b[i]=1;
			}
		}
		for (i=0;i<n;i++)	cout<<a[i];
		cout<<endl;
		for (i=0;i<n;i++)	cout<<b[i];
		cout<<endl;
	}
}