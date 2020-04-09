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

ll check(ll x,ll y,ll x1,ll y1, ll x2, ll y2)
{
	if (x>=x1 and x<=x2 and y>=y1 and y<=y2)	return 1;
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
	ll t;cin>>t;
	while (t--)
	{
		ll left,right,down,up;cin>>left>>right>>down>>up;
		ll x,y,x1,y1,x2,y2;
		cin>>x>>y>>x1>>y1>>x2>>y2;
		ll xf=x-left+right, yf= y-down+up;
		ll xx=abs(x2-x1);
		ll yy=abs(y2-y1);
		if (check(xf,yf,x1,y1,x2,y2) and (xx>=1 or (left+right==0)) and (yy>=1 or (up+down==0)))
			cout<<"Yes\n";
		else	cout<<"No\n";
	}
}