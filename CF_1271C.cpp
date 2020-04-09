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
ll n,sx,sy;
ll f(ll x[],ll y[],ll tx,ll ty)
{
	ll i,c=0,st,tp,sp;
	for (i=0;i<n;i++)
	{
		st=abs(sx-tx)+abs(sy-ty);
		tp=abs(tx-x[i])+abs(ty-y[i]);
		sp=abs(sx-x[i])+abs(sy-y[i]);
		if (st+tp==sp)	c++;
	}
	return c;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	cin>>n>>sx>>sy;
	ll x[n],y[n],i;
	for (i=0;i<n;i++)	cin>>x[i]>>y[i];
	ll a1,a2,a3,a4;
	a1=f(x,y,sx-1,sy);
	a2=f(x,y,sx+1,sy);
	a3=f(x,y,sx,sy+1);
	a4=f(x,y,sx,sy-1);
	ll ma=max(a1,max(a2,max(a3,a4)));
	cout<<ma<<endl;
	if (ma==a1)	cout<<sx-1<<" "<<sy<<endl;
	else if (ma==a2)	cout<<sx+1<<" "<<sy<<endl;
	else if (ma==a3)	cout<<sx<<" "<<sy+1<<endl;
	else	cout<<sx<<" "<<sy-1<<endl;
}