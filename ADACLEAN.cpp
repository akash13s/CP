//AUTHOR: *Akash Shrivastva*
//Birla Institute of Technology,Mesra,India
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define M1 1000000007
#define M2 1000000009
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define pll vector< pair <ll,ll> >
#define F first
#define S second
#define PII pair <ll,ll>

ll base1=31,base2=41,b1[100003],b2[100003];
void initPowerArray(ll n)
{
	ll i;
	b1[0]=1;b2[0]=1;
	for (i=1;i<=n;i++){
		b1[i]=(b1[i-1]*base1)%M1;
		b2[i]=(b2[i-1]*base2)%M2;
	}
}
pair<ll,ll> getHash(string s)
{
	ll i,l=s.length(), ans1=0, ans2=0;
	for (i=0;i<l;i++){
		ans1=(ans1*base1+s[i]-'a')%M1;
		ans2=(ans2*base2+s[i]-'a')%M2;
	}
	return make_pair(ans1,ans2);
}
ll getHashOfSubstring(ll l, ll r, ll h[], ll m, ll b[])
{
	ll ans;
	if (l==0)
		ans = h[r]%m;
	else
	{
		ans = (h[r]-h[l-1]*b[r-l+1]%m+m)%m;
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
	ll t;cin>>t;
	initPowerArray(100002);
	while (t--)
	{
		ll n,k;cin>>n>>k;
		string s;cin>>s;
		ll i;
		set< pair<ll,ll> > ss;
		ll h1[n+1],h2[n+1];
		h1[0]=s[0]-'a';
		h2[0]=s[0]-'a';
		for (i=1;i<n;i++){
			h1[i]=(h1[i-1]*base1 + s[i]-'a')%M1;
			h2[i]=(h2[i-1]*base2 + s[i]-'a')%M2;
		}
		for (i=0;i<=n-k;i++)
		{
			ll hash1 = getHashOfSubstring(i,i+k-1,h1,M1,b1);
			ll hash2 = getHashOfSubstring(i,i+k-1,h2,M2,b2);
			ss.insert(make_pair(hash1,hash2));
		}
		cout<<ss.size()<<endl;
	}
}