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
    ll x,y,z;cin>>x>>y>>z;
    ll a[3];ll i;
    for (i=0;i<3;i++)	cin>>a[i];
    if (x>a[0])	cout<<"NO";
	else
	{
		a[0]-=x;
		ll s=0;
		s=a[0]+a[1];
		if (s<y)	cout<<"NO";
		else
		{
			s-=y;
			if (s+a[2]<z)	cout<<"NO";
			else	cout<<"YES";
		}
	}
}	