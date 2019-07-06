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
	ll t;cin>>t;
	while (t--)
	{
		ll n,k;cin>>n>>k;
		ll c=0;
		if (n<k)
		{
			cout<<n<<endl;
		}
		else{
			// c+=n-(n/k)*k;
			// n=(n/k)*k;
			// while (n>0)
			// {
			// 	if (n%k==0)	n/=k,c++;
			// 	else	n--,c++;
			// }
			// cout<<c<<endl;
			while (n>0)
			{
				if (n%k!=0)
				{
					c+=n-(n/k)*k;
					n=(n/k)*k;
				}
				else	n/=k,c++;
			}
			cout<<c<<endl;
		}
	}
}
