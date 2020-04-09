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
	while (t--){
	    ll n;cin>>n;
	    ll a[n],b[n],c[n],i;
	    for (i=0;i<n;i++)	cin>>a[i];
	    for (i=0;i<n;i++)	cin>>b[i];
		for (i=0;i<n;i++)	c[i]=b[i]-a[i];
	    ll flag=0;
		set<ll> s;
		vll v;
		for (i=0;i<n;i++)
		{
			// cout<<c[i]<<" ";
			if (c[i]<0)
			{
				flag=1;
				break;
			}
			else
			{
				if (c[i]>0){
					s.insert(c[i]);
					v.push_back(i);
				}
			}
		}

		if (flag)	cout<<"NO\n";
		else if (!s.empty())
		{
			if (s.size()==1)	cout<<"YES\n";
			else if (s.size()>1)	cout<<"NO\n";
		}
		else
		{
			if (v.empty() or v.size()==1)	{
				cout<<"YES\n";
				
			}
			else{
			ll flag1=0;
			for (i=0;i<v.size()-1;i++)
			{
				if (v[i+1]-v[i]!=1)	{
					flag1=1;
					break;
				}
			}
			if (flag1)	cout<<"NO\n";
			else	cout<<"YES\n";
			}
		}
	}
}