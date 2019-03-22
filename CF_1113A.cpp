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
	ll n,v;cin>>n>>v;
	if (v>=n-1)	cout<<n-1<<endl;
	else
	{
		ll i,c=0,s=0;
		for (i=1;i<=n;i++)
		{

			if (i==1)	s+=i*v,c+=v;
			else	s+=i,c++;
			if (c==n-1)	break;

		}
		cout<<s<<endl;
	}
}