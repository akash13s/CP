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
	ll a[n],i,j,c=0;
	for (i=0;i<n;i++)	cin>>a[i];

	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (a[j]-a[i]+1==j-i+1)
				c=max(c,j-i-1+(a[i]==1)+(a[j]==1000));
		}
	}
	cout<<c<<endl;
}