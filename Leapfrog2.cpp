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

	ll t,j;cin>>t;
	for (j=1;j<=t;j++)
	{
		string s;cin>>s;
		ll a=0,b=0,dot=0,i,l=s.length();
		for (i=0;i<l;i++)
		{
			if (s[i]=='A')	a++;
			else if (s[i]=='B')	b++;
			else	dot++;
		}
		if (b>=dot and dot>0)	cout<<"Case #"<<j<<": Y"<<endl;
		else
		{
			if (dot-2>=0 and b-2>=0 and dot-b==1)	cout<<"Case #"<<j<<": Y"<<endl;
			else	cout<<"Case #"<<j<<": N"<<endl;
		}
	}
}
