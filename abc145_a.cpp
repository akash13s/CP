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
#define MAXN 1000000
map < pair<ll,ll> , ll > dp;
ll xx,yy;
ll f(ll x,ll y)
{
	if (x>xx or y>yy)	return 	0;
	if (dp.find(mp(x,y))!=dp.end())	return dp[mp(x,y)];	
	return dp[mp(x,y)]=(f(x+1,y+2)%M+f(x+2,y+1)%M)%M;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    cin>>xx>>yy;
    f(0,0);
    cout<<dp[mp(xx,yy)]%M<<endl;
}