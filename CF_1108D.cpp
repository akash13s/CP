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
	ll i,c=0;
	if (n==1)	cout<<0<<endl,cout<<s<<endl;
	else
	{
		for (i=1;i<n-1;i++)
		{
			if (s[i]==s[i-1])
			{
				c++;
				if (s[i]=='R' and s[i+1]=='G')
					s[i]='B';
				else if (s[i]=='R' and s[i+1]=='B')
					s[i]='G';
				else if (s[i]=='B' and s[i+1]=='R')
					s[i]='G';
				else if (s[i]=='B' and s[i+1]=='G')
					s[i]='R';
				else if (s[i]=='G' and s[i+1]=='B')
					s[i]='R';
				else if (s[i]=='G' and s[i+1]=='R')	s[i]='B';
				else if (s[i]=='R' and s[i+1]=='R')	s[i]='B';
				else if (s[i]=='G' and s[i+1]=='G')	s[i]='B';
				else if (s[i]=='B' and s[i+1]=='B')	s[i]='G';
			}
		}
		if (s[n-1]==s[n-2])
		{
			c++;
			if (s[n-2]=='R')	s[n-1]='G';
			else if (s[n-2]=='G')	s[n-1]='B';
			else	s[n-1]='G';
		}
		cout<<c<<endl;
		cout<<s<<endl;
	}
}