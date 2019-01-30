//AUTHOR: *Akash Shrivastva*
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
ll isPrime(ll n)
{
    ll c=0,i;
    for (i=2;i*i<=n;i++)
    {
        if (n%i==0)
        {
            c++;break;
        }
    }
    if (c==0)   return 1;
    else    return 0;
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
	if (isPrime(n))	cout<<1;
	else if (n%2==0)	cout<<2;
	else
	{
		if (isPrime(n-2))	cout<<2;
		else	cout<<3;
	}
}