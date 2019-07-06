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
    	ll a[26],i;memset(a,0,sizeof(a));
    	string s;cin>>s;
    	sort(s.begin(),s.end());
    	for (i=0;i<s.length();i++)
    	{
    		a[s[i]-'a']++;
    	}
    	ll c=0;
    	for (i=0;i<26;i++)
    	{
    		if (a[i]>1)	c=1;
    	}
    	if (c)	cout<<"No"<<endl;
    	else
    	{
    		char ch=s[0];ll flag=0;
    		for (i=1;i<s.length();i++)
    		{
    			// cout<<(char)(ch+1)<<endl;
    			if (!(s[i]==(char)(ch+1))){
    				flag=1;break;
    			}
    			else	ch=s[i];
    		}
    		if (flag)	cout<<"No"<<endl;
    		else	cout<<"Yes"<<endl;
    	}
    }
}
