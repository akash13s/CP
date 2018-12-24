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
	
	ll t;cin>>t;
	while (t--)
	{
		ll n;cin>>n;
		char a[n][n],i,j;
		for (i=0;i<n;i++){
			for (j=0;j<n;j++)
				cin>>a[i][j];
		}

		ll right[n][n],down[n][n];
		
		for (i=n-1;i>=0;i--)
		{
			for (j=n-1;j>=0;j--)
			{
				if (a[i][j]=='.')
				{
					if (i==n-1)	down[i][j]=1;
					else down[i][j]=down[i+1][j];
				}
				else
					down[i][j]=0;	
			}
		}
		for (i=n-1;i>=0;i--)
		{
			for (j=n-1;j>=0;j--)
			{
				if (a[i][j]=='.')
				{
					if (j==n-1)	right[i][j]=1;
					else right[i][j]=right[i][j+1];
				}
				else
					right[i][j]=0;	
			}
		}

		ll c=0;
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
			{
				if (down[i][j]==1 and right[i][j]==1)
					c++;
			}
		}

		cout<<c<<endl;
		// #ifndef ONLINE_JUDGE
  //   	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
  //   	#endif
	}

}
