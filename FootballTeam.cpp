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
	ll i;
	set< pair< ll, PII > > s;
	for (i=0;i<n;i++)
	{
		ll x,y,z;cin>>x>>y>>z;
		s.insert(mp(x,mp(y,z)));
	}
	ll len=s.size();
	ll c=1;
	auto itr=s.begin();
	auto prev=itr;itr++;
	while (1)
	{
		c++;
		if (c==(len+1)/2)	break;
		prev=itr;
		itr++;
	}
	ll k=(itr->F+prev->F)/2;
	if (len%2==0)
	{
		if (k==prev->F)	cout<<"NO"<<endl;
		else	cout<<"YES"<<endl,cout<<k<<endl;
	}
	else	cout<<"YES"<<endl,cout<<itr->F<<endl;
}
