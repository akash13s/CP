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
	ll n,x,y;cin>>n>>x>>y;
	ll a[n],i;
	for (i=0;i<n;i++)	cin>>a[i];
	if (x>y)	cout<<n<<endl;
	else
	{
		ll cnt=0;
		for (i=0;i<n;i++)
		{
			if (a[i]<=x)	cnt++;
		}
		if (cnt%2==0)	cout<<cnt/2<<endl;
		else	cout<<cnt/2+1<<endl;
	}
}
