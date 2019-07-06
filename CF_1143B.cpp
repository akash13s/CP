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
map<ll,ll> dp;
ll n,s=1;
ll f(ll num)
{
	if (num==0)	return 1;
	else if (num<0)	return 0;
	else if (dp[num]!=0)	return dp[num];
	else{
		ll d;
		d=num%10;
		dp[num]=s*max(9*f(num/10-1),d*f(num/10));
		return dp[num];
	}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    cin>>n;   
    cout<<f(n)<<endl;
}