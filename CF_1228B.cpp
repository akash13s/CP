//AUTHOR: *Akash Shrivastva*
//Birla Institute of Technology,Mesra,India
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;

#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define pll vector< pair <ll,ll> >
#define F first
#define S second
#define PII pair <ll,ll>
ll modularExponentiation(ll x,ll n,ll M)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%M,n/2,M);
    else                             //n is odd
        return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    ll h,w;cin>>h>>w;
    ll r[h],c[w],i,j;
    for (i=0;i<h;i++)	cin>>r[i];
    for (i=0;i<w;i++)	cin>>c[i];
    ll cnt=0,a[h][w];
	memset(a,0,sizeof(0));
	for (i=0;i<h;i++)
	{
		for (j=0;j<r[i];j++)
			a[i][j]=1;
	}
	for (i=0;i<w;i++)
	{
		for (j=0;j<c[i];j++)
			a[j][i]=1;
	}
	ll p=0,flag=0;
	for (i=0;i<h;i++)
	{
		p=0;
		for (j=0;j<w;j++)
		{
			if (a[i][j]==1)
				p++;
			else	break;
		}
		if (p!=r[i])
		{
			cout<<0<<"\n";
			return 0;
		}
	}
	for (i=0;i<w;i++)
	{
		p=0;
		for (j=0;j<h;j++)
		{
			if (a[j][i]==1)	p++;
			else	break;
		}
		if (p!=c[i])	{
			cout<<0<<"\n";
			return 0;
		}
	}
    for (i=0;i<h;i++)
    {
    	for (j=0;j<w;j++)
    	{
    		if (j-r[i]>0 and i-c[j]>0)	
    			cnt++;
    	}
    } 
 	// cout<<cnt<<"\n";
    ll aa=modularExponentiation(2,cnt,1000000007)%(1000000007);
    cout<<aa<<"\n";
}