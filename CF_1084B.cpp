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
	
	ll n,s;cin>>n>>s;
	ll a[n],i,t=0;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
		t+=a[i];
	}
	if (t<s)
		cout<<-1<<endl;
	else
	{
		sort(a,a+n);
		if (n==1)
			cout<<a[0]-s<<endl;
		else
		{
			ll sd=0,d;
			for (i=1;i<n;i++)
				sd+=a[i]-a[0];
			if (sd>=s)	cout<<a[0]<<endl;
			else
			{
				d=s-sd;
				if (d%n==0)
					d=d/n;
				else
					d=d/n+1;
				cout<<a[0]-d<<endl;
			}
		}
	}
}
