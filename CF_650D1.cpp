//AUTHOR: *Akash Shrivastva*
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
	ll a[n],b[n],i,j;
	for (i=0;i<n;i++)	cin>>a[i];
	for (i=0;i<n;i++)	cin>>b[i];

	ll c=0,ans=0,l,mi=INT_MAX,flag=0;
	for (i=0;i<n;i++)
	{
		l=b[i]/a[i];
		mi=min(mi,l);
	}
	ans+=mi;
	for (i=0;i<n;i++)	b[i]-=a[i]*mi;
	while (1)
	{
		for (i=0;i<n;i++)
		{
			if (b[i]>=a[i])	b[i]-=a[i];
			else 
			{
				k-=a[i]-b[i];
				b[i]=0;
				if (k<0)
				{
					flag=1;
					break;
				}
			}
		}
		if (flag)	break;
		else	c++;
	}
	cout<<ans+c<<endl;
}
