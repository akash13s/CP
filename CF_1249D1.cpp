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
    	ll n1=n;
    	vll v;
    	while (n>0)
    		v.pb(n%3),n/=3;
    	reverse(v.begin(),v.end());
    	ll l=v.size();
    	ll c=0,j,i;
    	for (i=0;i<l;i++)
    	{
    		if (v[i]==2)
    		{
    			c++;
    			break;
    		}
    	}
    	if (!c)	cout<<n1<<endl;
    	else
    	{
    		// for (i=0;i<v.size();i++)	cout<<v[i];
    		for (j=i+1;j<l;j++)	v[j]=0;
    		v[i]=0;
    		ll carry=1;
    		for (j=i-1;j>=0;j--)
    		{
    			if (v[j]==0)
    			{
    				v[j]=1,carry=0;
    				break;
    			}
    			else
    			{
    				v[j]=0;
    			}
    		}
    		if (carry)
    		{
    			reverse(v.begin(),v.end());
    			v.pb(1);
    			reverse(v.begin(),v.end());
    		}	
    		// for (i=0;i<v.size();i++)	cout<<v[i];
    		ll ans=0;
    		for (i=0;i<v.size();i++)
    			ans=ans*3+v[i];
    		cout<<ans<<endl;
    	}
    }
}