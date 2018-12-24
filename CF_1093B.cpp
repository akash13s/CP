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

bool isPalin(string s)
{
	string rev;ll i;
	for (i=0;i<s.length();i++)
		rev=s[i]+rev;
	if (rev==s)
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
	ll t;cin>>t;
	while (t--)
	{
		string s;cin>>s;
		string s1=s;
		sort(s1.begin(),s1.end());
		if (s==s1){
			if (isPalin(s))
				cout<<"-1"<<endl;
			else
				cout<<s<<endl;
		}
		else
			cout<<s1<<endl;
	}
}
