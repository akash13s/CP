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

ll divisorSum(ll n) 
{ 
    ll sum = 0; 
    for (ll i = 1; i <= n; ++i) 
        sum += (n / i) * i; 
    return sum; 
} 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll l1,r1,l2,r2;
	cin>>l1>>r1;
	cin>>l2>>r2;
	ll s1=divisorSum(r1)-divisorSum(l1-1);
	ll s2=divisorSum(r2)-divisorSum(l2-1);
	if (s1>s2)	cout<<"A"<<endl;
	else if (s2>s1)	cout<<"B"<<endl;
	else	cout<<"Draw"<<endl;
}
