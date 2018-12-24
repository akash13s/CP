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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	ll n;cin>>n;
	ll a[n],i,s=0;
	for (i=0;i<n;i++){
		cin>>a[i];
		s+=a[i];
	}
	if (s%3!=0)
		cout<<0<<endl;
	else
	{
		s/=3;
		ll sm[n];sm[n-1]=a[n-1];
		ll cnt[n];
		if (sm[n-1]==s)	cnt[n-1]=1;
		else	cnt[n-1]=0;
		for (i=n-2;i>=0;i--)
		{
			sm[i]=a[i]+sm[i+1];
			if (sm[i]==s)	cnt[i]=1;
			else	cnt[i]=0;
		}
		for (i=n-2;i>=0;i--)
			cnt[i]=cnt[i]+cnt[i+1];
		ll s1=0,ans=0;
		for (i=0;i<n-2;i++)
		{
			s1+=a[i];
			if (s1==s)
				ans+=cnt[i+2];
		}
		cout<<ans<<endl;
	}
}
