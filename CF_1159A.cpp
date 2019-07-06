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
ll n;
ll check(string s,ll k)
{
	ll i;
	for (i=0;i<n;i++)
	{
		if (k<0)	return 0;
		if (s[i]=='+')
			k++;
		else k--;
	}
	if (k>=0)	return 1;
	else return 0;
}
ll calc(string s,ll k)
{
	ll i;

	for (i=0;i<n;i++)
	{
		if (s[i]=='+')	k++;
		else	k--;
	}
	return k;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	cin>>n;
	string s;cin>>s;
	ll c=0,i;
	for (i=0;i<n;i++)	if (s[i]=='-')	c++;
	ll ans;
	// cout<<check(s,6)<<endl;
	for (i=c;i>=0;i--)
	{
		if (check(s,i))
			ans=calc(s,i);
		else	break;
	}
	cout<<ans<<endl;
}
