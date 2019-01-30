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
ll isPrime(ll n)
{
	ll c=0,i;
	for (i=2;i*i<=n;i++)
	{
		if (n%i==0)
		{
			c++;break;
		}
	}
	if (c)	return 0;
	else	return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n;cin>>n;
	if (n>=1 and n<=9)
	{
		cout<<1<<endl;
		cout<<n<<endl;
	}
	else
	{
		if (isPrime(n))
		{
			ll i,f,f1;
			n--;
			for (i=2;i*i<=n;i++)
			{
				if (n%i==0){
					f=i,f1=n/i;
					break;
				}	
			}
			cout<<f1+1<<endl;
			cout<<1<<" ";
			for (i=1;i<=f1;i++)
				cout<<f<<" ";
		}
		else
		{
			ll i,f,f1;
			for (i=2;i*i<=n;i++)
			{
				if (n%i==0){
					f=i,f1=n/i;
					break;
				}	
			}
			cout<<f1<<endl;
			for (i=1;i<=f1;i++)
				cout<<f<<" ";
		}
	}
}