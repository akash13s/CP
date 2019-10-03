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
    	ld n,s;cin>>n>>s;
    	if (n==1)
    	{
    		if (s==0)	cout<<1<<"\n";
    		else	cout<<"-1\n";
    	}
    	else
    	{
    		ld x=n*s;
    		ll i;
    		x/=sqrt(n-1);
    		for (i=1;i<=n-1;i++)	cout<<0<<" ";
    		cout<<fixed<<setprecision(6)<<x<<"\n";
    	}
    }
}