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
bool prime(ll n)
{
	ll i,c=0;
	for (i=2;i*i<=n;i++)
	{
		if (n%i==0)
		{
			c++;break;
		}
	}
	if (c>0)
		return false;
	else
		return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll x;cin>>x;
	ll i;
	if (x==1)
		cout<<-1<<endl;	
	else if (x==2 or x==3)
		cout<<2<< " "<<2<<endl;
	else
	{
		ll a,b;
		if (prime(x))	x--;
		for (i=2;i*i<=x;i++)
		{
			if (x%i==0)
			{
				b=i;
				break;
			}
		}
		for (i=x/b;i<=x;i++)
		{
			if (i%b==0 and i*b>x)
			{
				a=i;
				break;
			}
		}
		cout<<a<<" "<<b<<endl;
	}
}
