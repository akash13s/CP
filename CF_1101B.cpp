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
	ll i,c=0,l;l=s.length();
	ll i1=0,i2=0,i3=0,i4=0,c1=0,c2=0,c3=0,c4=0;
	for (i=0;i<l;i++)
	{
		if (s[i]=='['){
			c1++;
			i1=i;break;
		}
	}
	for (i=i1+1;i<l;i++)
	{
		if (s[i]==':'){
			c2++;
			i2=i;break;
		}
	}
	
	for (i=l-1;i>=0;i--)
	{
		if (s[i]==']'){
			c4++;
			i4=i;break;
		}
	}
	for (i=i4-1;i>=0;i--)
	{
		if (s[i]==':'){
			c3++;
			i3=i;break;
		}
	}
	// cout<<i1<<" "<<i2<<" "<<i3<<" "<<i4<<endl;
	if (c1!=0 and c2!=0 and c3!=0 and c4!=0)
	{
		if (i1<i2 and i2<i3 and i3<i4){
		for (i=i2+1;i<=i3-1;i++)
		{
			if (s[i]=='|')	c++;
		}
		cout<<4+c<<endl;
		}
		else	cout<<-1<<endl;
	}
	else	cout<<-1<<endl;
}