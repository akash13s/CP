//AUTHOR: *Akash Shrivastva*
//Birla Institute of Technology,Mesra,India
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define M 15000000000031
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define pll vector< pair <ll,ll> >
#define F first
#define S second
#define PII pair <ll,ll>
ll calc(ll n)
{
	ll k,n1;
	n1=n;
	if (n1%2==0)
	{
		n1/=2;
		ll k1=n+1;
		k1%=M;
		k=((n1%M)*k1)%M;
	}
	else
	{
		n1=(n1+1)/2;
		k=((n%M)*(n1%M))%M;
	}
	return k;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n,m;cin>>n>>m;
	n--,m--;
	ll A=calc(n);
	ll B=calc(m);
	// cout<<A<<" "<<B<<endl;
	ll ans=((n-m+M)%M+A%M-B%M+M)%M;
	cout<<ans<<endl;
}
