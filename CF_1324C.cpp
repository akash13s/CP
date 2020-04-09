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
		string s;cin>>s;
		ll l=s.length(),i;
		vll v;
		for (i=0;i<l;i++)
		{
			if (s[i]=='R')	v.pb(i+1);
		}
		if (v.size()!=0){
		ll ma=v[0];
		for (i=1;i<v.size();i++)
		{
			if (v[i]-v[i-1]>ma)
				ma=v[i]-v[i-1];
		}
		ll dl=v[0],dr=l+1-v[v.size()-1];
		ll ans=max(dl,max(dr,ma));
		cout<<ans<<endl;
		}
		else	cout<<l+1<<endl;
	}
}