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
		ll n,m;cin>>n>>m;
		char c[n][m];
		ll i,j;
		for (i=0;i<n;i++)
			for (j=0;j<m;j++)
				c[i][j]='B';
		c[0][0]='W';
		for (i=0;i<n;i++)
		{
			for (j=0;j<m;j++)
				cout<<c[i][j];
			cout<<endl;
		}
	}
}