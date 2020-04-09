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

ll base=53,b[1000003];
void init()
{
	ll i;
	b[0]=1;
	for (i=1;i<=1000002;i++)
		b[i]=(b[i-1]*base)%M;
}
ll getSubstringHash(ll l, ll r, ll h[])
{
	if (l==0)	return h[r]%M;
	else	return (h[r]-(h[l-1]*b[r-l+1])%M+M)%M;
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
	init();
	while (t--)
	{
		string s;cin>>s;
		ll n=s.length();
		ll i=0,j=n-1;
		string rev=s;
		reverse(rev.begin(),rev.end());
		if (rev==s)	cout<<s<<endl;
		else 
		{
			string copy="";					
			while(1)
			{
				if (s[i]==s[j])	copy.push_back(s[i]),i++,j--;
				else	break;
			}
			string sl=""; ll k;
			for (k=i;k<=j;k++)	sl.push_back(s[k]);
			string sr=sl;
			ll hf[j-i+2],hb[j-i+2];
			hf[0]=sl[0]-'a';
			ll l=sl.length();
			reverse(sr.begin(),sr.end());
			hb[0]=sr[0]-'a';
			for (i=1;i<l;i++) {
				hf[i]=(hf[i-1]*base+sl[i]-'a')%M;
				hb[i]=(hb[i-1]*base+sr[i]-'a')%M;
			}
			// cout<<"sl "<<sl<<endl;
			ll kk;
			string middle="";ll mi=-1,mj=-1;
			for (i=0;i<l;i++) {
				kk=getSubstringHash(l-i-1,l-1,hb);
				// cout<<hf[i]<<" "<<kk<<endl;
				if (hf[i]==kk)
					mi=i;
			}
			for (j=0;j<l;j++) {
				kk=getSubstringHash(l-j-1,l-1,hf);
				if (hb[j]==kk)
					mj=j;
			}
			if (mi>mj)	middle=sl.substr(0,mi+1);
			else middle=sr.substr(0,mj+1);
			string ans=copy+middle;
			reverse(copy.begin(),copy.end());
			ans+=copy;
			cout<<ans<<endl;	
		}
	}
}