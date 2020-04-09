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
		ll a[n],b[n],o[n],z[n],m[n];
		ll i;
		for (i=0;i<n;i++)	cin>>a[i];
		for (i=0;i<n;i++)	cin>>b[i];
		memset(o,0,sizeof(o));
		memset(z,0,sizeof(z));
		memset(m,0,sizeof(m));
		if (a[0]==0)	z[0]=1;
		else if (a[0]==1)	o[0]=1;
		else	m[0]=1;
		for (i=1;i<n;i++)
		{
			if (a[i]==0)	z[i]=z[i-1]+1, o[i]=o[i-1], m[i]=m[i-1];
			else if (a[i]==1)	o[i]=o[i-1]+1, z[i]=z[i-1], m[i]=m[i-1];
			else	m[i]=m[i-1]+1, z[i]=z[i-1], o[i]=o[i-1];	
		}
		ll flag=0;
		for (i=n-1;i>=1;i--)
		{
			if (a[i]==b[i])	continue;
			else if (a[i]<b[i])
			{
				if (o[i-1]==0)	{
					flag++;
					break;
				}	
			}
			else 
			{
				if (m[i-1]==0)	{
					flag++;
					break;
				}
			}
		}
		if (a[0]!=b[0])	flag++;
		if (flag)	cout<<"NO\n";
		else	cout<<"YES\n";
	}
}