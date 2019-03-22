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

	ll n;cin>>n;
	ll a[n],b[n],i;
	for (i=0;i<n;i++)	cin>>a[i];
	for (i=0;i<n;i++)	cin>>b[i];
	ll cnt=0,ans=0;
	map< PII, ll > m;
	for (i=0;i<n;i++)
	{
		ll a1=abs(a[i]),b1=abs(b[i]);
		if (a[i]!=0)
		{
			ll g=__gcd(a1,b1);
			a1/=g,b1/=g;
			if ((a[i]<0 and b[i]<=0) or (a[i]>0 and b[i]>=0))
				m[mp(-1*b1,a1)]++;
			else if ((a[i]>0 and b[i]<=0) or (a[i]<0 and b[i]>=0))
				m[mp(b1,a1)]++;
		}
		else
		{
			if (a[i]==0 and b[i]==0)	
				cnt++;
		}
	}
	for (auto itr=m.begin();itr!=m.end();itr++){
		ans=max(ans,itr->S);
	}
	cout<<ans+cnt<<endl;
}