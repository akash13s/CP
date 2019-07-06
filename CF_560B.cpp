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
	vll v[3];
	ll i;
	for (i=0;i<3;i++)
	{
		ll p,q;cin>>p>>q;
		v[i].pb(p);
		v[i].pb(q);
	}
	for (i=0;i<3;i++)	sort(v[i].begin(),v[i].end());
	ll c=0;
	ll l1,b1,l2,b2,l3,b3,l4,b4;
	b1=v[0][0]-v[1][0];
	l1=v[0][1];
	b2=v[0][0];
	l2=v[0][1]-v[1][1];

	b3=v[0][0]-v[1][1];
	l3=v[0][1];
	b4=v[0][0];
	l4=v[0][1]-v[1][0];

	if (b1>=0 and b2>=0 and l1>=0 and l2>=0 and ((b1>=v[2][0] and l1>=v[2][1]) or (l1>=v[2][0] and b1>=v[2][1]) or (b2>=v[2][0] and l2>=v[2][1]) or (l2>=v[2][0] and b2>=v[2][1])))
			cout<<"YES"<<endl;
	else if (b3>=0 and b4>=0 and l3>=0 and l4>=0 and ((b3>=v[2][0] and l3>=v[2][1]) or (l3>=v[2][0] and b3>=v[2][1]) or (b4>=v[2][0] and l4>=v[2][1]) or (l4>=v[2][0] and b4>=v[2][1])))
			cout<<"YES"<<endl;
		else	cout<<"NO"<<endl;
}
