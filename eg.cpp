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
#include <iostream>   // std::cout
#include <string> 
string s;ll n;
vector < string > v;
void f(ll i)
{
	if (i<n)
	{
		string n1,n2,n3;int k;
		ll j=(i+n-1)/2;
		for (k=i;k<=j;k++)
			n1+=s[k];
		if (j+1<n)	n3=n1+s[j+1];
		else	n3=n1;
		for (k=i+1;k<n;k++)
			n2+=s[k];
		if (n1>=n2)	v.pb(n1),f(j+1);
		else	v.pb(n3),f(j+2);
	}
	else	return ;
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
		cin>>s;
		n=s.length();
		ll i=0;
		v.clear();
		f(i);
		cout<<v.size()<<endl;
		for (i=0;i<v.size();i++)
			cout<<v[i]<<" ";
		cout<<endl;
	}
}