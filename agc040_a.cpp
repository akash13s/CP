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
    string s;cin>>s;
    ll l=s.length();
    ll n=l+1,i,pre[n],suf[n];
    pre[0]=0;
    for (i=0;i<l;i++)
    {
    	if (s[i]=='<')	pre[i+1]=pre[i]+1;
    	else	pre[i+1]=0;
    }
    suf[n-1]=0;
    for (i=l-1;i>=0;i--)
    {
    	if (s[i]=='>')	suf[i]=suf[i+1]+1;
    	else	suf[i]=0;
    }
    ll sm=0;
    for (i=0;i<n;i++)	sm+=max(pre[i],suf[i]);
    cout<<sm<<endl;
}