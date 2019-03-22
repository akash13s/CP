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
	ll t;cin>>t;
	while (t--)
	{
		string s;cin>>s;
		ll k;cin>>k;
		ll n=s.length();
		stack<char> s1,s2;ll i,j,l,c=0,lc=0;char u,ch;
		for (i=0;i<n;i++)
		{
			if (i==0 or s1.empty())	s1.push(s[i]),lc=1;
			else
			{	
				if (s[i]!=s.top())	s1.push(s[i]),lc=1;
				else
				{
					if (lc+1<k)
						s1.push(s[i]),lc++;
					else
					{
						for (j=1;j<=k-1;j++)	s1.pop();
						
					}
				}
			}
		}
		while (!s1.empty())	s2.push(s1.top()),s1.pop();
		while (!s2.empty())	cout<<s2.top(),s2.pop();
		cout<<endl;
	}
}