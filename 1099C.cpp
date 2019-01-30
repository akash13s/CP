//AUTHOR: *Akash Shrivastva*
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
	ll k;cin>>k;
	ll cn=0,sf=0,i,c=0,j;
	ll l=s.length();
	for (i=0;i<l;i++)
	{
		if (s[i]=='*')	sf++;
		if (s[i]=='?')	cn++;
	}
	ll l1=l-sf-cn;
	if (k==l1)
	{
		for (i=0;i<l;i++)
		{
			if (s[i]=='*' or s[i]=='?')
				continue;
			else	cout<<s[i];
		}
	}
	else if (k>l1)
	{
		if (sf==0)	cout<<"Impossible";
		else
		{
			ll d=k-l1;
			for (i=0;i<l;i++)
			{
				if (s[i]=='*')
				{
					if (c==0){
					for (j=1;j<=d;j++)
						cout<<s[i-1];
					c=1;
					}
					else	continue;
				}
				else if (s[i]=='?')	continue;
				else	cout<<s[i];
			}
		}
	}
	else
	{
		ll d=l1-k;
		if (sf+cn<d)
			cout<<"Impossible";
		else
		{
			for (i=0;i<l;i++)
			{
				if (s[i]=='*' or s[i]=='?')
					continue;
				else
				{
		
						if ((i+1<l) and (s[i+1]=='*' or s[i+1]=='?') and d>0){
							d--;
							continue;
						}
				
					else	cout<<s[i];

				}
			}
		}
		
	}
}
