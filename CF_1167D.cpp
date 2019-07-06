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
	string s;cin>>s;
	ll a[n],i;
	memset(a,(ll)0,sizeof(a));
	vll v1,v2;
	for (i=0;i<n;i++)
	{
		if (s[i]=='(')
			v1.pb(i);
		else	v2.pb(i);
	}
	ll len=min(v1.size(),v2.size());
	for (i=0;i<len;i++)
	{
		if (i%2==1)
		{
			a[v1[i]]=1;
			a[v2[i]]=1;
		}
		else	a[v1[i]]=0,a[v2[i]]=0;
	}
	for (i=0;i<n;i++)	cout<<a[i];
}
