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
		ll a,b,r;cin>>a>>b;
		vll v;ll c=0,sz=0,i;
		while (a>0)
		{
			r=a%b;
			if (r>1)
			{
				c++;break;
			}
			v.pb(r);
			if (r==1)	sz++;
			a/=b;
		}
		if (c)	cout<<"NO"<<endl;
		else
		{
			cout<<"YES "<<sz<<endl;
			for (i=0;i<v.size();i++)
			{
				if (v[i]==1)	cout<<i<<" ";
			}
			cout<<endl;
		}
	}
}