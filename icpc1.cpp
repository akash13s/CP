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
    	ll i,j;
    	map< pair <ll, pair<ll,ll> >, ll > m; 
    	vector < pair<ll, pair<ll,ll> > > v;
   		for (i=0;i<n;i++)
   		{
   			ll l,r,v1;cin>>l>>r>>v1;
   			v.pb(mp(v1,mp(l,r)));
   			m[mp(v1,mp(l,r))]++;
   		}
   		ll c,le,re;
   		ll flag=0;
   		for (i=0;i<n;i++)
   		{
   			c=1;
   			le=re=0;
   			for (j=0;j<n;j++)
   			{
   				if (i!=j)
   				{
   					if (((v[i].S.S>v[j].S.F and v[i].S.S<v[j].S.S) or (v[j].S.S>v[i].S.F and v[j].S.S<v[i].S.S))and v[i].F==v[j].F)
   					{
   						c++;
   					}
   					else if ((v[i].S.S==v[j].S.F or v[j].S.S==v[i].S.F) and v[i].F==v[j].F)
   					{
   						if (v[i].S.S==v[j].S.F)	re++;
   						else if (v[j].S.S==v[i].S.F) le++;
   					}
   				}
   			}
   			if (c>2 or le>1 or re>1)	{
   				flag=1;
   				break;
   			}
   		}
   		for (auto itr=m.begin();itr!=m.end();itr++)
   		{
   			if (itr->second>2)
   			{
   				flag=1;
   				break;
   			}
   		}
   		// cout<<c<<endl;
    	if (flag)	cout<<"NO\n";
    	else	cout<<"YES\n";
    }
}