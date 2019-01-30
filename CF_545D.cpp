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
	ll n;cin>>n;
	ll a[n],b[n],i,c=0;
	for (i=0;i<n;i++)	cin>>a[i];
	memset(b,0,sizeof(b));
	sort(a,a+n);
	b[0]=a[0];
	for (i=1;i<n;i++)
	{
		if (a[i]<b[i-1])
		{
			if (lower_bound(a+i,a+n,b[i-1])-a!=n)
				swap(a[i],a[lower_bound(a+i,a+n,b[i-1])-a]),b[i]=a[i]+b[i-1];
			else	break;
		}
		else	b[i]=a[i]+b[i-1];
	}
	for (i=0;i<n;i++)
	{
		if (b[i]!=0)	c++;
	}
	cout<<c<<endl;
}
