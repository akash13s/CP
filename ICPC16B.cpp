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
    	ll a[n],i,cnt=0,m=0,one=0,z=0;
    	for (i=0;i<n;i++)
    	{
    		cin>>a[i];
    		if (a[i]>1 or a[i]<-1)	cnt++;
    		if (a[i]==-1)	m++;
    		if (a[i]==1)	one++;
            if (a[i]==0)    z++;
    	}
        if (n==1)   cout<<"yes\n";
    	else if (cnt==0)
    	{
    		if (m==0) cout<<"yes\n";
            else if (m==1) 
            {
                if (z or one)   cout<<"yes\n";
                else    cout<<"no\n";
            }
            else
            {
                if (one)    cout<<"yes\n";
                else    cout<<"no\n";
            }
    	}
    	else if (cnt==1)
    	{
    		if (m==0)	cout<<"yes\n";
    		else	cout<<"no\n";
    	}
    	else
    	{
    		cout<<"no\n";
    	}
    }
}