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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n;cin>>n;
	if (n%2==0)	cout<<"NO"<<endl;
	else
	{
		ll a[2*n+1],i=1,f=0,c=1;
		while (1)
		{
			a[i]=c;
			c++;
			if (f)	i--,f=0;
			else
			{
				if (i+n<=2*n)	i+=n;
				else	i-=n;
				f=1;
			}
			if (i==1)	break;
		}
		cout<<"YES"<<endl;
		for (i=1;i<=2*n;i++)
			cout<<a[i]<<" ";
	}
}
