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
ll check(ll k,ll n,ll p)
{
	ll no=__builtin_popcountll(n-k*p);
	if (no<=k and n-k*p>=k)	return 1;
	else	return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    ll n,p;cin>>n>>p;
    ll k;
    for (k=1;k<=1000000;k++)
    {
    	if (check(k,n,p))
    	{
    		cout<<k<<endl;
    		return 0;
    	}
    }
    cout<<-1<<endl;
    return 0;
}