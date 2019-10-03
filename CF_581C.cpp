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
    ll n,k,i,c=0;cin>>n>>k;
    pll v;
    for (i=0;i<n;i++)
    {
    	ll x;cin>>x;
    	c+=x/10;
    	if (x!=100)
    		v.pb({10-x%10,x});
    }
    sort(v.begin(),v.end());
    for (i=0;i<v.size();i++)
    {
    	if (v[i].F<=k)	c++,k-=v[i].F,v[i].S+=v[i].F;
    	else	break;
    }
    if (k>0)
    {
    	ll k1;
    	for (i=0;i<v.size();i++)
    	{
    		if (k>0)
    		{
    			k1=min((ll)100,v[i].S+k);
	    		c+=k1/10-v[i].S/10;
	    		k-=k1-v[i].S;
    		}
    	}
    }
    cout<<c<<endl;
}