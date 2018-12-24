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
	int i,j;
	if (s.length()!=1){
		int n=s.length();
		char ch[n];
		for (i=0;i<n;i++)
			ch[i]=s[i];
	for (i=0;i<n-1;i++)
	{
		if (ch[i]!=ch[i+1])
			continue;
		else
			ch[i+1]='1',i++;
	}
	int l,r,c;
	for (i=0;i<n-1;i++)
	{
		if (ch[i]=='1')
		{
			l=ch[i-1]-'a',r=ch[i+1]-'a';
			for (j=0;j<26;j++)
			{
				if (j!=l and j!=r)
				{
					ch[i]=j+'a';break;
				}
			}
		}
	}
	if (ch[n-1]=='1')
	{
		l=ch[n-2]-'a';
		for (j=0;j<26;j++)
			{
				if (j!=l)
				{
					ch[i]=j+'a';break;
				}
			}
	}
	for (i=0;i<n;i++)
		cout<<ch[i];
	}
	else
		cout<<s<<endl;
}
