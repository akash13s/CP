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
bool isPerfectSquare(long double x) 
{   
  long double sr = sqrt(x); 
  return ((sr - floor(sr)) == 0); 
} 
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
		ll b1,b2;
		ll d=sqrt(1+8*k);
		if (!isPerfectSquare(1+8*k))	d++;
		// cout<<d<<endl;
		char c[n]; ll i;
		for (i=0;i<n;i++)	c[i]='a';
		b1=(d-1)/2;
		if ((d-1)%2!=0)
		{
			b1++;
			b2=k- (b1*(b1-1))/2 ;
			c[b1]='b',c[b2-1]='b';
		}
		else
		{
			b2=k- (b1*(b1-1))/2;
			c[b1]=c[b2-1]='b';
		}
		for (i=n-1;i>=0;i--)	cout<<c[i];
		cout<<endl;
	}
}