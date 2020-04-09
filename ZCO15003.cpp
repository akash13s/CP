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
bool comp(PII a,PII b)
{
	return a.S<b.S;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    ll n;cin>>n;
    pll v;ll i,j;
    for (i=0;i<n;i++)
    {
    	ll x,y;cin>>x>>y;
    	v.pb(mp(x,y));
    }
    sort(v.begin(),v.end(),comp);
    vll v1;
    ll flag;
    for (i=0;i<n;i++)
    {
    	flag=0;
    	for (j=0;j<v1.size();j++)
    	{
    		if (v1[j]>=v[i].F and v1[j]<=v[i].S)
    		{
    			flag=1;
    			break;
    		}
    	}
    	if (flag==0)	v1.pb(v[i].S);
    }
    cout<<v1.size()<<endl;
}