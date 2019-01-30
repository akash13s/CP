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
	ll a[n],i;ll c[10004];memset(c,0,sizeof(c));
	for (i=0;i<n;i++)	cin>>a[i],c[a[i]]++;
	map<ll,ll> m;
	sort(a,a+n);
	ll x=a[n-1],y;
	for (i=1;i<=x;i++)
	{
		if (x%i==0)	m[i]=1;
	}
	for (i=n-2;i>=0;i--)
	{
		if (m[a[i]]==1 and c[a[i]]==1)
			continue;
		else if (m[a[i]]==1 and c[a[i]]>1)
		{
			y=a[i];
			break;
		}
		else
		{
			y=a[i];break;
		}
	}
	cout<<x<<" "<<y<<endl;
}