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
ll p[41];
ll complement(ll n,ll bits)
{
	ll k=(p[bits]-1)^n;
	return k;
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
    ll i;
    p[0]=1;
    for (i=1;i<=40;i++)	p[i]=p[i-1]*2;
    while (t--)
    {
    	ll a,b,c1,c2,n;cin>>a>>b>>n;
    	ll n1=max(floor(log2(a)),floor(log2(b)))+1;
    	c1=a^b;
    	c2=complement(c1,max((ll)3,n1));
    	ll c=max(c1,c2);
    	// cout<<c1<<" "<<c2<<endl;
    	ll k=n%3;
    	if (k==1)	cout<<a<<"\n";
    	else if (k==2)	cout<<b<<"\n";
    	else	cout<<c<<"\n";
    }
}