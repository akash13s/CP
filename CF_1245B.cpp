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
    	ll i,r,p,s,r1=0,p1=0,s1=0;cin>>r>>p>>s;
    	string a;cin>>a;
    	for (i=0;i<n;i++)
    	{
    		if (a[i]=='R')	r1++;
    		else if (a[i]=='P')	p1++;
    		else	s1++;
    	}
    	ll k=min(r,s1)+min(p,r1)+min(s,p1);
    	if (k<(n+1)/2)	cout<<"NO\n";
    	else
    	{
    		char ch[n],cnt=0;
    		for (i=0;i<n;i++)	ch[i]='X';
	    	for (i=0;i<n;i++)
	    	{
	    		if (a[i]=='S' and r)	ch[i]='R',r--;	
	    	}
	    	for (i=0;i<n;i++)
	    	{
	    		if (a[i]=='P' and s)	ch[i]='S',s--;	
	    	}
	    	for (i=0;i<n;i++)
	    	{
	    		if (a[i]=='R' and p)	ch[i]='P',p--;	
	    	}
	    	for (i=0;i<n;i++)
    		{
    			if (ch[i]=='X')
    			{
    				if (s)	ch[i]='S',s--;
    				else if (r)	ch[i]='R',r--;
    				else ch[i]='P',p--;
    			}
    		}
    		cout<<"YES\n";
    		for (i=0;i<n;i++)	cout<<ch[i];
    		cout<<endl;
    	}
    	
    }
}