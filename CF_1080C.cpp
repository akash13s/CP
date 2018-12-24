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
PII count(ll x1,ll y1,ll x2,ll y2)
{
	ll w,b;
	w=b=((x2-x1+1)*(y2-y1+1))/2;
	if (((x2-x1+1)*(y2-y1+1))%2==1)
	{
		if ((x1+y1)%2==0)
			w++;
		else
			b++;
	}
	PII p=mp(w,b);
	return p;
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
		ll n,m;cin>>n>>m;
		PII p=count(1,1,m,n);
		ll w=p.F;ll b=p.S;
		ll x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		p=count(x1,y1,x2,y2);
		w+=p.S,b-=p.S;
		ll x3,y3,x4,y4;
		cin>>x3>>y3>>x4>>y4;
		ll x5=max(x1,x3);
		ll y5=max(y1,y3);
		ll x6=min(x2,x4);
		ll y6=min(y2,y4);
		if (x5>x6 or y5>y6)
		{
			p=count(x3,y3,x4,y4);
			w-=p.F;b+=p.F;
		}
		else
		{
			PII original=count(x3,y3,x4,y4);
			PII overlap=count(x5,y5,x6,y6);
			PII p1=mp(original.F-overlap.F,original.S-overlap.S);
			b+=p1.F;w-=p1.F;
			b+=(x6-x5+1)*(y6-y5+1);
			w-=(x6-x5+1)*(y6-y5+1);
		}
		cout<<w<<" "<<b<<endl;
	}
}
