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

ll base=67,b[100003];
void initPowerArray()
{
	ll i;
	b[0]=1;
	for (i=1;i<=100000;i++)
		b[i]=(b[i-1]*base)%M;
}
ll getHash(string s)
{
	ll i,l=s.length(), ans=0;
	for (i=0;i<l;i++)
		ans=(ans*base+s[i]-48)%M;
	return ans;
}
ll getHashOfSubstring(ll l, ll r, ll h[])
{
	ll ans;
	if (l==0)
		ans = h[r]%M;
	else
	{
		ans = (h[r]-h[l-1]*b[r-l+1]%M+M)%M;
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
	string s;cin>>s;
	ll n;cin>>n;
	initPowerArray();
	ll l=s.length(),i,j;
	ll h[l+1];h[0]=s[0]-48;
	for (i=1;i<l;i++) h[i]=(h[i-1]*base+s[i]-48)%M;
	while (n--)
	{
		string pattern;cin>>pattern;
		ll patternHash = getHash(pattern);
		ll lp=pattern.length();
		ll c=0;
		for (i=0;i<=l-lp;i++)
		{
			ll substringHash = getHashOfSubstring(i,i+lp-1,h);
			// cout<<substringHash<<" "<<patternHash<<endl;
			if (substringHash==patternHash)
			{
				c++;
				break;
			}
		}
		if (c)	cout<<"Y\n";
		else	cout<<"N\n";
	}
}