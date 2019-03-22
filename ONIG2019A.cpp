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
map<ll,ll> m,m1;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    ll n;cin>>n;
    ll a[n],i;
    for (i=0;i<n;i++)	cin>>a[i],m[a[i]]=1;
    sort(a,a+n);
	for (i=0;i<n;i++)
	{
		if (m[a[i]]!=m[(-1)*a[i]])
			m1[a[i]]=1;
		else	m1[a[i]]=0;
	}
	ll b[n];b[n-1]=0;
	for (i=n-2;i>=0;i--)
	{
		if (m1[a[i+1]] and a[i+1]>a[i])
			b[i]=b[i+1]+1;
		else	b[i]=b[i+1];
	}
	ll c=0;
	for (i=0;i<n;i++)
	{
		// cout<<b[i]<<" ";
		if (b[i]>=3 and a[i]>0)
			c+=a[i],c%=M;
	}
	cout<<c<<endl;
}
