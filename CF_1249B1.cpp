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
    ll q;cin>>q;
    while (q--)
    {
    	ll n;cin>>n;
    	ll a[n+1],i,j;
    	for (i=1;i<=n;i++)	cin>>a[i];
    	ll b[n+1],c=0;
    	for (i=1;i<=n;i++)
    	{
    		j=i;
    		c=;
    		while (i!=a[j])
    		{
    			c++;
    			j=a[j];
    		} 
    		b[i]=c;
    	}
    	for (i=1;i<=n;i++)	cout<<b[i]<<" ";
    	cout<<endl;
    }
}