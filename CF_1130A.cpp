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
	ll pos=0,neg=0;
	ll a[n],i;for (i=0;i<n;i++)	{cin>>a[i];
		if (a[i]>0)	pos++;
		else if (a[i]<0)	neg++;
	}
	ll k=n/2;
	if (n%2==1)	k++;
	if (pos>=k)	cout<<1<<endl;
	else if (neg>=k)	cout<<-1<<endl;
	else	cout<<0<<endl;
}