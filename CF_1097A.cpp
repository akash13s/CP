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
	char s1=s[0],s2=s[1];
	ll i,c=0;
	for (i=0;i<5;i++)
	{
		string ss;
		cin>>ss;
		if (ss[0]==s1 or ss[1]==s2)
			c++;
	}
	if (c>0)	cout<<"YES"<<endl;
	else	cout<<"NO"<<endl;
}
