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
vll v,v1;
bool isPowerOfTwo(ll n) 
{ 
   if(n==0) 
   return false; 
   return (ceil(log2(n)) == floor(log2(n))); 
} 

void bin(ll n) 
{ 
    /* step 1 */
    if (n > 1) 
        bin(n/2); 
    /* step 2 */
    v.pb(n % 2); 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    ll x;cin>>x;
    ll steps=0,i;
    if (isPowerOfTwo(x+1))
    	steps=0;
    else
    {
    	ll k,pos;
    	while (1)
    	{
    		if (isPowerOfTwo(x+1)){
	    		break;
	    	}
    		v.clear();
    		bin(x);
    		for (i=0;i<v.size();i++)
    		{
    			if (v[i]==0){
    				pos=i;break;
    			}
    		}
    		k=v.size()-pos;
    		v1.pb(k);
	    	k=pow(2,k)-1;
	    	x=x^k;steps++;
	    	// cout<<x<<" ";
	    	if (isPowerOfTwo(x+1)){
	    		break;
	    	}
	    	else	x++,steps++;
	    	// cout<<x<<endl;
    	}
    }
    cout<<steps<<endl;
    for (i=0;i<v1.size();i++)
    	cout<<v1[i]<<" ";	
}
