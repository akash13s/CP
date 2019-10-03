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
    ll a[n],i;
    map<ll,ll> m;
    for (i=0;i<n;i++)	cin>>a[i],m[a[i]]=i;
    string s;cin>>s;
    ll l[n],r[n];
	r[n-1]=0;
	for (i=n-2;i>=0;i--)
	{
		if (s[i]=='1')	r[i]=1+r[i+1];
		else	r[i]=0;
	}
	l[0]=0;
	for (i=1;i<n;i++)
	{
		if (s[i-1]=='1')	l[i]=1+l[i-1];
		else	l[i]=0;
	}
	ll c=0,j;
	// for (i=0;i<n;i++)
	// 	cout<<l[i]<<" "<<r[i]<<endl;
	for (i=0;i<n;i++)
	{
		if (a[i]!=i+1)
		{
			j=m[i+1];
			if (j<=i)
			{
				if (j+r[j]<i)
				{
					c++;
					break;
				}
			}
			else
			{
				if (j-l[j]>i)
				{
					c++;
					break;
				}
			}
			
		}
	}
	if (c)	cout<<"NO\n";
	else	cout<<"YES\n";
}