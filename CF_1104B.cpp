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
	ll i,c=0;ll n=s.length();
	stack<char> v;
	
	for (i=0;i<n;i++)
	{
		if (v.empty())
			v.push(s[i]);
		else if (s[i]==v.top())
		{
			c++;v.pop();
		}
		else	v.push(s[i]);
	}
	if (c%2==1)	cout<<"Yes"<<endl;
	else	cout<<"No"<<endl;
}