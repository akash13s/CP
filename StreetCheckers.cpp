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
ll odd[1000001],even[1000001];
void sieve()
{
	ll i,j;
	for (i=1;i<=1000000;i++)
	{
		odd[i]=1;
		even[i]=0;
	}
	for (i=2;i<=1000000;i++)
	{
		if (i%2==0)	even[i]++;
		else odd[i]++;
		for (j=2*i;j<=1000000;j+=i)
		{
			if (i%2==0)	even[j]++;
			else	odd[j]++;
		}
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
	ll t,h;cin>>t;
	sieve();
	for (h=1;h<=t;h++)
	{
		ll l,r;cin>>l>>r;
		ll c=0,i;
		for (i=l;i<=r;i++)
		{
			if (abs(odd[i]-even[i])<=2)
				c++;
		}
		cout<<"Case #"<<h<<": "<<c<<"\n";
	}
}