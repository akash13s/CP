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
	ll n,x,y;
	cin>>n>>x>>y;
	ll a[n],i,j;
	for (i=0;i<n;i++)	cin>>a[i];
	ll c1=0,ans;
	for (i=0;i<n;i++)
	{
		c1=0;
		for (j=i-x;j<i;j++)
		{
			if (j>=0 and j<n and a[i]>=a[j])
			{
				c1++;
				break;
			}
		}
		for (j=i+1;j<=i+y;j++)
		{
			if (j>=0 and j<n and a[i]>=a[j])
			{
				c1++;
				break;
			}
		}
		if (!c1)
		{
			ans=i+1;
			break;
		}
	}
	cout<<ans<<endl;
}
