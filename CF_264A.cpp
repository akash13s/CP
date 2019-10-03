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
    ll i,n=s.length();
    vector < pair<double,ll> > v;
    double lb=0,up=1,mid;
    for (i=0;i<n;i++)
    {
    	if (lb<=up)
    	{
    		mid=(lb+up)/2;
    	v.pb({mid,i+1});
    	if (s[i]=='l')	up=mid;
    	else	lb=mid; 
    	}
    		
    }
    sort(v.begin(),v.end());
    for (i=0;i<v.size();i++)	cout<<v[i].S<<"\n";
}