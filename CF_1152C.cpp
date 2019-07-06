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
    ll a,b;cin>>a>>b;
    ll k=0,i,g=0,g1,l=INT_MAX,l1;
    for (i=0;i<=100000;i++)
    {
    	g1=__gcd(a+i,b+i);
    	l1=((a+i)*(b+i))/g1;
    	// cout<<i<<" "<<g1<<endl;
    	if (l1<l)	l=l1,k=i;
    }
    cout<<k<<endl;
}
