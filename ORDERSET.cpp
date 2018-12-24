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
multiset <ll> m;

void insert_element(ll x)
{
	m.insert(x);
}
void delete_element(ll x)
{
	m.erase(x);
}
ll kth_smallest(ll k)
{
	auto itr=m.begin();ll i;
	for (i=0;i<k-1;i++)
		itr++;
	return *itr;
}
ll count(ll x)
{
	return distance(m.begin(),m.lower_bound(x))-1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll q;cin>>q;
	while (q--)
	{
		ll x;char op;
		cin>>op>>x;
		if (op=='I')
			insert_element(x);
		else if (op=='D')
			delete_element(x);
		else if (op=='K'){
			if (x>m.size())
				cout<<"invalid"<<endl;
			else
				cout<<kth_smallest(x-1)<<endl;
		}
		else
			cout<<count(x)<<endl;
	}
}
