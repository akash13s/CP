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
    ll i,j;
    string s1;
    for (i=0;i<n;i++)
    {
    	if (s[i]=='1')	s1.pb('a');
    	else if (s[i]=='2')	s1.pb('b'),s1.pb('b');
    	else if (s[i]=='3') s1.pb('a'),s1.pb('b');
    	else
    	{
    		for (j=0;j<s1.length();j++)
    		{
    			if (s1[j]=='a')	s1[j]='b';
    			else s1[j]='a';
    		}
    	}
    }
    cout<<s1<<endl;
}