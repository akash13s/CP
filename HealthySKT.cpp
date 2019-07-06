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
	ll i,c=0;
	multiset<ll> s;
	for (i=0;i<n;i++)
	{
		ll x;cin>>x;
		s.insert(x);
	}
	
	while (!s.empty())
	{
		auto itr=s.lower_bound((*s.begin())*2);
		if (*itr==s.size())	
		{
			c+=s.size();
			break;
		}
		else
		{
			c++;
			s.erase(itr);
			s.erase(s.begin());
		}
	}
	cout<<c<<endl;
	
}
