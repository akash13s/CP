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
	for (i=1;i*i<=n;i++)
	{
		if (n%i==0)
			c+=2;
	}
	if (n==(ll)(sqrt(n)*(ll)sqrt(n)))	c--;
	cout<<c<<endl;
}