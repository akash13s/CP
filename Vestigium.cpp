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
	ll h;
	for (h=1;h<=t;h++)
	{
		ll n;cin>>n;
		ll a[n][n],i,j,k=0;
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++){
				cin>>a[i][j];
				if (i==j)	k+=a[i][j];
			}
		}
		ll f[103],r=0,c=0;
		for (i=0;i<n;i++)
		{
			memset(f,0,sizeof(f));
			for (j=0;j<n;j++)
				f[a[i][j]]++;
			for (j=1;j<=n;j++)
			{
				if (f[j]>1){
					r++;
					break;
				}
			}
		}

		for (i=0;i<n;i++)
		{
			memset(f,0,sizeof(f));
			for (j=0;j<n;j++)
				f[a[j][i]]++;
			for (j=1;j<=n;j++)
			{
				if (f[j]>1) {
					c++;
					break;
				}
			}
		}
		cout<<"Case #"<<h<<": "<<k<<" "<<r<<" "<<c<<endl;
	}
}