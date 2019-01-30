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
	ll a[n],b[n],i,j,d=INT_MIN,s=0,e=0;
	for (i=0;i<n;i++)	cin>>a[i];
	for (i=0;i<n;i++)	b[i]=a[i];

	for (i=0;i<n;i++)
	{
		for (j=i;j>=0;j-=k)
			b[j]=0;
		for (j=i;j<n;j+=k)
			b[j]=0;
		for (j=0;j<n;j++)
		{
			if (b[j]==-1)	s++;
			else if (b[j]==1)	e++;
	
		}
		d=max(d,abs(e-s));e=0,s=0;
		for (j=0;j<n;j++)	b[j]=a[j];
	}
	cout<<d<<endl;
}
