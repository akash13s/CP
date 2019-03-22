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
	ll c1,c2,c3,c4;cin>>c1>>c2>>c3>>c4;
	if (c1==c4)
	{
		if (c2==0 and c3==0)	cout<<1;
		else if (c2>0 and c3==0)	cout<<1;
		else 
		{
			if (c1>0)	cout<<1;
			else	cout<<0;
		}
	}
	else	cout<<0;
}