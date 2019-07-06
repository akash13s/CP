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
    ll a[n],i;for (i=0;i<n;i++)	cin>>a[i];
    ll o,z;
    for (i=0;i<n;i++)
    {
    	if (a[i]==1)	o=i+1;
    }
    for (i=0;i<n;i++)
    {
    	if (a[i]==0)	z=i+1;
    }
    cout<<min(o,z)<<endl;
}