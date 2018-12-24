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
bool f3(char a,char b,char c)
{
	int h=a-'0';
	int t=b-'0';
	int o=c-'0';
	if ((h*100+t*10+o)%8==0)
		return true;
	else
		return false;
}
bool f2(char a,char b)
{
	int t=a-'0';
	int o=b-'0';
	if ((t*10+o)%8==0)
		return true;
	else
		return false;
}
bool f1(char a)
{
	if ((a-'0')%8==0)
		return true;
	else
		return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	string s;
	cin>>s;
	ll n=s.length();
	ll i,j,k,c=0;char ch[n];
	for (i=0;i<n;i++)
		ch[i]=s[i];
	
	if (n>=3){
		for (i=0;i<n;i++)
		{
			if (ch[i]=='0' or ch[i]=='8')
			{
				c++;
				cout<<"YES"<<endl;
				cout<<ch[i]<<endl;
				break;
			}
		}
	if (c==0){
	for (k=0;k<n-2;k++)
	{
		for (i=k+1;i<n-1;i++)
		{
			for (j=i+1;j<n;j++)
			{
				if (f3(ch[k],ch[i],ch[j]))
				{
					cout<<"YES"<<endl;
					cout<<ch[k]<<ch[i]<<ch[j]<<endl;
					c++;
					break;
				}
			}
			if (c>0)
				break;
		}
		if (c>0)
			break;
	}
	if (c==0)
	{
		for (i=0;i<n-1;i++)
		{
			for (j=i+1;j<n;j++)
			{
				if (f2(ch[i],ch[j]))
				{
					c++;
					cout<<"YES"<<endl;
					cout<<ch[i]<<ch[j]<<endl;
					break;
				}
			}
			if (c>0)
				break;
		}
		if (c==0)
			cout<<"NO"<<endl;
	}
	}

	
	}
	else
	{
		if (n==2)
		{
			if (ch[0]=='8' or ch[0]=='0')
				cout<<"YES"<<endl,cout<<ch[0]<<endl;
			else if (ch[1]=='8' or ch[1]=='0')
				cout<<"YES"<<endl,cout<<ch[1]<<endl;
			else if (f2(ch[0],ch[1]))
				cout<<"YES"<<endl,cout<<ch[0]<<ch[1]<<endl;
			else
				cout<<"NO"<<endl;
		}
		else if (n==1)
		{
			if (f1(ch[0]))
				cout<<"YES"<<endl,cout<<ch[0]<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
}

