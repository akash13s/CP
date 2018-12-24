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
#define PII pair <ll,ll>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n,i;cin>>n;
	map < PII,ll> m;
	map<ll,ll> l,r;
	for (i=1;i<=n;i++)
	{
		ll x,y;cin>>x>>y;
		l[x]++,r[y]++,m[mp(x,y)]++;
	}
	ll ans=0,k;
	for (auto itr=l.begin();itr!=l.end();itr++)
	{
		k=itr->second;
		ans+=((k-1)*k)/2;
	}
	for (auto itr=r.begin();itr!=r.end();itr++)
	{
		k=itr->second;
		ans+=((k-1)*k)/2;
	}
	for (auto itr=m.begin();itr!=m.end();itr++)
	{
		k=itr->second;
		ans-=((k-1)*k)/2;
	}
	cout<<ans<<endl;
}
