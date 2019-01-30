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
	ll q;cin>>q;
	while (q--)
	{
		ll l1,r1,l2,r2;cin>>l1>>r1>>l2>>r2;
		if (l1==r2)	cout<<l1<<" "<<l2<<endl;
		else if (l2==r1)	cout<<l1<<" "<<r2<<endl;
		else	cout<<l1<<" "<<r2<<endl;
	}
}