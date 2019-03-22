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
		ll n,k;cin>>n>>k;
		ll a[100003],d[100003],i;
		pll v;
		memset(a,0,sizeof(a));
		memset(d,0,sizeof(d));
		for (i=0;i<n;i++)
		{
			ll l,r;cin>>l>>r;
			v.pb(mp(l,r));
			d[l]+=1,d[r+1]-=1;
		}
		for (i=1;i<=100000;i++)
			a[i]=a[i-1]+d[i];
		ll c=0;
		for (i=1;i<=100000;i++)
		{
			if (a[i]==k)	c++;
		}
		ll s[100001],sk[100001];s[0]=sk[0]=0;
		if (a[1]==k)	s[1]=1;
		else	s[1]=0;
		for (i=2;i<=100000;i++)
		{
			if (a[i]==k)
				s[i]=s[i-1]+1;
			else	s[i]=s[i-1];
		}
		if (a[1]==k+1)	sk[1]=1;
		else	sk[1]=0;
		for (i=2;i<=100000;i++)
		{
			if (a[i]==k+1)
				sk[i]=sk[i-1]+1;
			else	sk[i]=sk[i-1];
		}
		ll ans=0;
		for (i=0;i<n;i++)
		{
			ll l=v[i].F;
			ll r=v[i].S;
			ll k1,k2;
			k1=s[r]-s[l-1];
			k2=sk[r]-sk[l-1];
			ans=max(ans,c-k1+k2);
		}
		cout<<ans<<endl;
	}
}