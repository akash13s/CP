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
	ll n,x,y;cin>>n>>x>>y;
	string s;cin>>s;
	ll i,c=0;
	for (i=n-1;i>n-1-y;i--)
	{
		if (s[i]=='1')	c++;
	}
	if (s[n-1-y]=='0')	c++;
	for (i=n-1-y-1;i>n-1-x;i--)
	{
		if (s[i]=='1')	c++;
	}
	cout<<c<<endl;
}
