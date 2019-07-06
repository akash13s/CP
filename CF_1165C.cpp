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
	stack<char> s1;
	ll i,c=0;
	for (i=0;i<n;i++)
	{
		if (s1.empty() or s1.size()%2==0)
		{
			s1.push(s[i]);
		}
		else
		{
			if (s[i]==s1.top())
				c++;
			else	s1.push(s[i]);
		}
	}
	if (s1.size()>0 and s1.size()%2==1)	c++,s1.pop();
	cout<<c<<endl;
	string str="";
	while (!s1.empty())
		str+=s1.top(),s1.pop();
	reverse(str.begin(),str.end());
	cout<<str<<endl;
}
