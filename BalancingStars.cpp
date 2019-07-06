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
char f(char ch)
{
	if (ch=='[')	return ']';
	else if (ch=='{')	return '}';
	else	return ')';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	string a;cin>>a;
	stack < pair<char,ll> > s;
	ll i,c=0,flag=0;
	for (i=0;i<a.length();i++)
	{
		if (a[i]=='[' or a[i]=='{' or a[i]=='(')
		{
			s.push(mp(a[i],0));
		}
		else if (a[i]=='*')
		{
			if (!s.empty())	
			{
				pair <char,ll> p=s.top();
				s.pop();
				p.S++;
				s.push(p);
			}
		}
		else
		{
			if (a[i]==']' or a[i]==')' or a[i]=='}')
			{
				if (s.empty() or a[i]!=f(s.top().F))
				{
					flag++;
				}
				else
				{
					pair <char,ll> p=s.top();
					c++;
					s.pop();
					if (p.S<2)	flag++;
				}
			}
		}
	}
	if (!s.empty())	flag++;
	if (flag>0)	
		cout<<"No "<<c<<endl;
	else	cout<<"Yes "<<c<<endl;
}
