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
string insert1(string s, ll n, char ch)
{
	ll i;
	for (i=0;i<n;i++)
	{
		s.push_back(ch);
	}
	return s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll t;cin>>t;
	ll h;
	for (h=1;h<=t;h++)
	{
		string s;cin>>s;
		ll i,l=s.length();
		string str="";
		ll prev=0,d;
		for (i=0;i<l;i++)
		{
			d=s[i]-'0';
			if (d>=prev) str=insert1(str,d-prev,'(');
			else	str=insert1(str,prev-d,')');
			str.push_back(s[i]);
			prev=d;
		}
		str= insert1(str,prev,')');
		cout<<"Case #"<<h<<": "<<str<<endl;
	}
}