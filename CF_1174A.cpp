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
	ll a[2*n],i;
	for (i=0;i<2*n;i++)	cin>>a[i];
	sort(a,a+2*n);
	ll s1=0,s2=0;
	for (i=0;i<n;i++)	s1+=a[i];
	for (i=n;i<2*n;i++)	s2+=a[i];
	if (s1==s2)	cout<<-1<<endl;
	else
	{
		for (i=0;i<2*n;i++)	cout<<a[i]<<" ";
	}	
}
