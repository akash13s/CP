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
	string a;cin>>a;
	ll i,c=0;
	for (i=0;i<n-1;i++)
	{
		if (a[i]!=a[i+1])
		{
			c++;break;
		}
	}
	if (c)	cout<<"YES"<<endl,cout<<a[i]<<a[i+1]<<endl;
	else	cout<<"NO"<<endl;
}