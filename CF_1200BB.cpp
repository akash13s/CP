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
		ll n,m,k;
		cin>>n>>m>>k;
		ll a[n],i;
		for (i=0;i<n;i++)	cin>>a[i];
		if (n==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
		ll k1,c=0;
		for (i=0;i<n-1;i++)
		{
			k1=abs(a[i]-a[i+1]);
			if (k1<=k)
			{
				if (a[i]>a[i+1])
					m+=k1+min(a[i]-k1,k);
				else	m+=k-k1;
			}
			else
			{
				if (a[i]>=a[i+1])
					m+=k1+k;
				else
				{
					if (m-k1+k>=0)	m-=k1-k;
					else
					{
						c++;
						break;
					}
				}
			}
		}
		if (c)	cout<<"NO"<<endl;
		else	cout<<"YES"<<endl;
	}
	}
}
