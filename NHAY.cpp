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
ll base=31,b[1000003];
void initPowerArray()
{
	ll i;
	b[0]=1;
	for (i=1;i<=1000000;i++)
		b[i]=(b[i-1]*base)%M;
}
ll getHash(string s)
{
	ll i,l=s.length(), ans=0;
	for (i=0;i<l;i++)
		ans=(ans*base+s[i]-'a')%M;
	return ans;
}
ll getHashOfSubstring(ll l, ll r, ll h[])
{
	ll ans;
	if (l==0)
		ans = h[r]%M;
	else
	{
		ans = (h[r]-(h[l-1]*b[r-l+1])%M+M)%M;
	}
	return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n;
	string pattern,s;
	initPowerArray();
	while (cin>>n>>pattern>>s)
	{
		ll patternHash = getHash(pattern);
		ll ls = s.length();
		ll h[ls+1],i;
		h[0]=s[0]-'a';
		for (i=1;i<ls;i++)	h[i]=(h[i-1]*base + s[i]-'a')%M;

		for (i=0;i<=ls-n;i++)
		{
			ll substringHash = getHashOfSubstring(i,i+n-1,h);
			if (substringHash==patternHash)	cout<<i<<endl;
		}
		cout<<""<<endl;
	}
}