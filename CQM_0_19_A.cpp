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
	ll n,m,i,j;cin>>n>>m;
	char a[n][m];
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
				cin>>a[i][j];

	ll c=0;
	
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			ll f1=0,f2=0,f3=0,f4=0;
			if (a[i][j]=='*')
			{
				if (i<n and j+1<m and a[i][j+1]=='*')	f1=1;
				if (i<n and j-1>=0 and a[i][j-1]=='*')	f2=1;
				if (i-1>=0 and j<m and a[i-1][j]=='*')	f3=1;
				if (i+1<n and j<m and a[i+1][j]=='*')	f4=1;

				if (f1 and f2 and f3 and f4)	c++;
			}
		}
	}
	cout<<c<<endl;
}	
