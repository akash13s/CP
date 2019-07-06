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
	ll t,i;cin>>t;
	ll a[60];
	a[0]=0;a[1]=1;
	for (i=2;i<60;i++)
		a[i]=(a[i-1]+a[i-2])%10;
			
	while (t--)
	{
		ll n;cin>>n;
		ll n1=log2(n);
		ll n2=(ll)pow(2,n1)%60;
		// cout<<n1<<" "<<n2<<endl;
		cout<<a[n2-1]<<endl;
	}
}
