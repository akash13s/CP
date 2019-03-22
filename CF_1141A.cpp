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
	ll n,m;cin>>n>>m;
	if (m%n!=0)	cout<<-1<<endl;
	else
	{
		ll c=0;
		// cout<<m/n<<endl;
		ll flag=0;
		m/=n;
		while (m>1)
		{
			// cout<<m<<endl;
			if (m%2==0)
				m/=2,c++;
			else if (m%3==0)
				m/=3,c++;
			else{
				flag=1;
				break;
			}
		}
		if (flag)	cout<<-1<<endl;
		else	cout<<c<<endl;
	}
}