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
	ll n;cin>>n;
    string s;cin>>s;
    ll i,j,c=0,ans=INT_MAX;
  	// cout<<'Z'-'Y'+'C'-'A'+1<<endl;
    for (i=0;i<n-3;i++)
    {
    	c=0;
    	for (j=i;j<i+4;j++)
    	{
    		if (j==i)
    			c+=min(abs(s[j]-'A'),abs(s[j]-'Z')+1);
    		else if (j==i+1)
    			c+=min(abs(s[j]-'C'),min(abs(s[j]-'Z')+'C'-'A'+1,s[j]-'A'+1+'Z'-'C'));
    		else if (j==i+2)
    			c+=min(abs(s[j]-'T'),min(abs(s[j]-'Z')+'T'-'A'+1,s[j]-'A'+1+'Z'-'T'));
    		else if (j==i+3)	
    			c+=min(abs(s[j]-'G'),min(abs(s[j]-'Z')+'G'-'A'+1,s[j]-'A'+1+'Z'-'G'));
    	}
    	ans=min(ans,c);
    }
    cout<<ans<<endl;
}