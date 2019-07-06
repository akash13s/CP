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
ll calc(ll n)
{
	double k=(double)n;
	double x=(-1+sqrt(1+4*2*k))/2;
	return (ll)x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll nn,s,q;cin>>nn>>s>>q;
	while (q--)
	{
		ll p,c;cin>>p>>c;
		ll x,x1,n,n1;
		x=(p-1)*s+c;
		if (x%351==0)	x=351;
		else	x%=351;
		x1=calc(x);
		n1=(x1*(x1+1))/2;
		if (n1==x)
			n=x-((x1-1)*x1)/2;
		else	n=x-n1;
		n--;
		char ch=(char)(97+n);
		cout<<ch<<endl;
	}
}
