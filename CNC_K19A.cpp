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

 //    #ifndef ONLINE_JUDGE
 //    freopen("input.txt", "r", stdin);
 //    freopen("output.txt", "w", stdout);
	// #endif
    ll t;cin>>t;
    while (t--)
    {
    	ll n;cin>>n;
    	ll a[n],i,sa=0,sb=0;
    	for (i=0;i<n;i++)	cin>>a[i];
    	for (i=0;i<n;i++)
    	{
    		if (i%2==0)
    		{
    			if (a[i]<4)	sa+=2;
    			else	sb+=1;
    		}
    		else
    		{
    			if (a[i]>3)	sb+=2;
    			else	sa+=1;
    		}
    	}
    	if (sa>sb)	cout<<"Alice"<<endl;
    	else if (sb>sa)	cout<<"Bob"<<endl;
    	else cout<<"Draw"<<endl;
    }
}
