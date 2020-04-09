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
    	ll n,k;cin>>n>>k;
    	ll i;
    	if (k>n/2)	cout<<-1<<endl;
    	else if (k==0)
    	{
    		for (i=1;i<=n;i++)	cout<<i<<" ";
    		cout<<endl;
    	}
    	else	
    	{
    		for (i=n-k-1;i<=n;i++)	cout<<i<<" ";
    		for (i=1;i<n-k-1;i++)	cout<<i<<" ";
    		cout<<endl;    	
    	}
    }
}