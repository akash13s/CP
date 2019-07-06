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
	
	vll v;
	v.pb(4);v.pb(8);v.pb(15);v.pb(16);v.pb(23);v.pb(42);

	cout<<"? 1 2"<<endl;ll x1;
	cin>>x1;
	cout<<"? 2 3"<<endl;ll x2;
	cin>>x2;
	cout<<"? 3 4"<<endl;ll x3;
	cin>>x3;
	cout<<"? 4 5"<<endl;ll x4;
	cin>>x4;
	while (1)
	{
		if (v[0]*v[1]==x1 and v[1]*v[2]==x2 and v[2]*v[3]==x3 and v[3]*v[4]==x4)
		{
			cout<<"! "<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<" "<<v[4]<<" "<<v[5]<<endl;
			fflush(stdout);
			break;
		}
		else	next_permutation(v.begin(),v.end());
	}
}
