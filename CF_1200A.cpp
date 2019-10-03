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
void l(ll a[])
{
	ll i;
	for (i=0;i<10;i++)
	{
		if (a[i]==0)
		{
			a[i]=1;
			break;
		}
	}
}
void r(ll a[])
{
	ll i;
	for (i=9;i>=0;i--)
	{
		if (a[i]==0)
		{
			a[i]=1;
			break;
		}
	}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n;cin>>n;
	string s;cin>>s;
	ll a[10],i;
	for (i=0;i<10;i++)	a[i]=0;
	for (i=0;i<n;i++)
	{
		if (s[i]=='L')	l(a);
		else if (s[i]=='R')	r(a);
		else	a[s[i]-'0']=0;
	}
	for (i=0;i<10;i++)	cout<<a[i];
}
