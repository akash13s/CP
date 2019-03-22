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
ll check(ll x)
{
	return ceil(log2(x))==floor(log2(x));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n;cin>>n;
	ll i,c,ans=1;vll v;
	if (n==1)	
	{
		cout<<"1 0"<<endl;
		return 0;
	}
	for (i=2;i<=n;i++)
	{
		if (n%i==0)
		{
			ans*=i;
			c=0;
			while (n%i==0)
				n/=i,c++;
			v.pb(c);
		}
	}
	cout<<ans<<" ";
	sort(v.begin(),v.end());
	v.erase(unique(v.begin(),v.end()),v.end());
	ll x;x=(ll)log2(v[v.size()-1]);
	if (v.size()==1)
	{
		if (check(v[v.size()-1]))
			cout<<x;
		else	cout<<x+2;
	}
	else
	{
		if (check(v[v.size()-1]))
			cout<<x+1;
		else	cout<<x+2;
	}
	return 0;
}