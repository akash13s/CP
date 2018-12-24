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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	ll n;
	cin>>n;
	ll a[n],i,j,ans=INT_MAX,c=0;
	for (i=0;i<n;i++)
		cin>>a[i];
	for (i=0;i<n;i++)
	{
		c=0;
		for (j=0;j<n;j++)
		{
			c+=a[j]*(abs(i-j)+j+i)*2;
		}
		ans=min(ans,c);
	}
	cout<<ans<<endl;
}
