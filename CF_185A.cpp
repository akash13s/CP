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
ll power(ll x,ll n)
{
	if (n==0)	return 1;
	else if (n%2==0)	return power((x*x)%M,n/2);
	else	return (x*power((x*x)%M,n/2))%M;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    ll n;cin>>n;
    ll k=power(2,n)%M;
    ll ans=((k+1)*k)/2;
    cout<<ans%M<<endl;
}