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
	char a[n][n];ll i,j;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)	cin>>a[i][j];
	}
	ll c=0;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (a[i][j]=='X')
			{
				if (i-1>=0 and j-1>=0 and a[i-1][j-1]=='X')
				{
					if (i-1>=0 and j+1<n and a[i-1][j+1]=='X')
					{
						if (i+1<n and j-1>=0 and a[i+1][j-1]=='X')
						{
							if (i+1<n and j+1<n and a[i+1][j+1]=='X')
								c++;
						}
					}
				}
			}
		}
	}
	cout<<c<<endl;
}