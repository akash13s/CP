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
    ll a,b,x,y;cin>>a>>b>>x>>y;
    ll g=__gcd(x,y);
    x/=g,y/=g;
    ll lb=1,up=2*pow(10,9),mid,l=0,r=0;
    while (lb<=up)
    {
    	mid=(lb+up)/2;
    	if (mid*x<=a and mid*y<=b)	l=mid*x,r=mid*y,lb=mid+1;
    	else	up=mid-1;
    }
    cout<<l<<" "<<r<<endl;
}