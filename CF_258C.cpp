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
	string s;cin>>s;
	ll i,c=0;
	for (i=0;i<s.length();i++)
	{
		if (s[i]=='0')	c++;
	}
	if (c==0)
	{
		cout<<s.substr(1)<<endl;
	}
	else
	{
		string str="";
		ll k=0;
		for (i=0;i<s.length();i++)
		{
			if (s[i]=='0' and k==0)
			{
				k++;
			}
			else
			{
				str.push_back(s[i]);
			}
		}
		cout<<str<<endl;
	}
}