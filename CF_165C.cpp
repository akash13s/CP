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
    ll k;cin>>k;
    string s;cin>>s;
   	ll i,j,n=s.length();
   	vll v;
    for (i=0;i<n;i++)
    {
    	if (s[i]=='1')	v.pb(i);
    }
    i=0;j=k-1;
    ll ans=0,l,r;
    if (k==0)
    {
    	if (v.size()==0)
    		ans+=n*(n+1)/2;
    	for (i=0;i<v.size();i++)
    	{
    		if (i==0)
    			ans+=(v[i]*(v[i]+1))/2;
    		else	ans+=((v[i]-v[i-1])*(v[i]-v[i-1]-1))/2;
    	}
    	if (v.size()>0)
    		ans+=((n-v[v.size()-1]-1)*(n-v[v.size()-1]))/2;
    	cout<<ans<<endl;
    	return 0;
    }
    while (i<v.size() and j<v.size())
    {
    	if (i==0)	l=v[i]+1;
    	else l=v[i]-v[i-1];
    	if (j==v.size()-1)	r=n-v[j];
    	else	r=v[j+1]-v[j];
    	ans+=l*r;
    	i++;j++;
    }
    cout<<ans<<endl;
}