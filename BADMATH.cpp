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
ll isSet(ll i, ll n)
{
	if ((1<<i) & n)	return 1;
	else	return 0;
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
		ll n,m;cin>>n>>m;
		string s;cin>>s;
		ll i,j,k;
		ll u=0,up,ans=0;
		for (i=0;i<n;i++)	if (s[i]=='_')	u++;
		up=pow(2,u)-1;
		ll cnt=0;
		for (j=0;j<=up;j++)
		{
			ans=0;
			k=u-1;
			for (i=0;i<n;i++)
			{
				if (s[i]=='_')
				{
					ans=ans*2+isSet(k,j);
					ans%=m;
					k--;
				}
				else	ans=ans*2+s[i]-'0',ans%=m;
			}
			if (ans%m==0)	cnt++;
		}
		cout<<cnt<<endl;
	}
}