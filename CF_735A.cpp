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
	ll n,k;cin>>n>>k;
	ll i,t,g;string s;cin>>s;
	for (i=0;i<n;i++)
	{
		if (s[i]=='G')	g=i;
		if (s[i]=='T')	t=i;
	}
	ll c=0,f=0;
	if (t>g)
	{
		for (i=g;i<n;i+=k)
		{
			if (s[i]=='#')
			{
				c++;break;
			}
			if (s[i]=='T')
			{
				f++;
				break;
			}	
		}
	}
	else
	{
		for (i=g;i>=0;i-=k)
		{
			if (s[i]=='#')
			{
				c++;break;
			}
			if (s[i]=='T')
			{
				f++;
				break;
			}	
		}
	}
	if (c)	cout<<"NO";
	else{
		if (f)	cout<<"YES";
		else	cout<<"NO";
	}	
}
