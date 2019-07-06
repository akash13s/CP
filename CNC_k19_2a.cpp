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
    	ll n;cin>>n;
    	ll a[n],i;for (i=0;i<n;i++)	cin>>a[i];
    	ll b[n],c[n],cnt=0;b[0]=a[0];c[n-1]=a[n-1];
    	for (i=1;i<n;i++){
    		b[i]=b[i-1]^a[i];
    		if (b[i]==0)	cnt++;
    	}
    	for (i=n-2;i>=0;i--)
    	{
    		c[i]=c[i+1]^a[i];
    		if (c[i]==0)	cnt++;
    	}
    	map<ll,ll> m;
    	for (i=0;i<n;i++)
    	{
    		if (m[b[i]]==0)	m[b[i]]=1;
    		else	cnt++;
    	}
    	cout<<cnt<<endl;
    }
}
