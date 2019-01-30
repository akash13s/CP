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
ll f(string s1,string s2,ll n)
{
	if (s1==s2)	return 1;
	else
	{
		if (n%2==1)	return 0;
		else
		{
			ll mid=n/2;
			string s11,s12,s21,s22;
			s11=s1.substr(0,mid);s12=s1.substr(mid);
			s21=s2.substr(0,mid);s22=s2.substr(mid);
			if ((f(s11,s21,mid) and f(s12,s22,mid)) or (f(s11,s22,mid) and f(s12,s21,mid)))
				return 1;
			else	return 0;
		}
	}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	string s1,s2;cin>>s1;cin>>s2;
	if (f(s1,s2,s1.length()))	cout<<"YES"<<endl;
	else	cout<<"NO"<<endl;
}