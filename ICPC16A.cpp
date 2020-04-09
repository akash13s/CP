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
    	ll x1,y1,x2,y2;
    	cin>>x1>>y1>>x2>>y2;
    	if (x2-x1==0)
    	{
    		if (y2>y1)	cout<<"up\n";
    		else	cout<<"down\n";
    	}
    	else if (y2-y1==0)	
    	{
    		if (x2>x1)	cout<<"right\n";
    		else	cout<<"left\n";
    	}
    	else	cout<<"sad\n";
    }
}