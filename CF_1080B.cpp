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
	ll q;cin>>q;
	while (q--)
	{
		ll l,r;cin>>l>>r;
		if (l%2==0 and r%2==0)
			cout<<(l+r)/2<<endl;
		else if (l%2==1 and r%2==1)
			cout<<-(l+r)/2<<endl;
		else if (l%2==1 and r%2==0)
			cout<<(r-l+1)/2<<endl;
		else
			cout<<-(r-l+1)/2<<endl;
	}
}
