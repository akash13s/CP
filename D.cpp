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
		ll n;double R,r;cin>>n>>R>>r;
		double r1=R-2*r;
		if (r==R and n==1)	cout<<"YES"<<endl;
		else if (r1<0)	cout<<"NO"<<endl;
		else
		{
			double angle=2*asin(r/(r1+r));
			double n1=(2*M_PI)/angle;
			
			if (n1>=n)	cout<<"YES"<<endl;
			else	cout<<"NO"<<endl;
		}
	}
}
