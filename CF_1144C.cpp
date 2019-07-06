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
    ll a[n],i;map<ll,ll> m,vis;
    for (i=0;i<n;i++)	cin>>a[i],m[a[i]]++;
    ll c=0;
    for (i=0;i<n;i++)
    {
    	if (m[a[i]]>2)	{
    		c=1;break;
    	}
    }
    if (c)	cout<<"NO"<<endl;
    else
    {
    	sort(a,a+n);
    	vll v1,v2;
    	for (i=0;i<n;i++)
    	{
    		if (!vis[a[i]])
    			v1.pb(a[i]),vis[a[i]]=1;
    		else	v2.pb(a[i]);
    	}
    	reverse(v2.begin(),v2.end());
    	cout<<"YES"<<endl;
    	cout<<v1.size()<<endl;
    	for (i=0;i<v1.size();i++)
    		cout<<v1[i]<<" ";
    	cout<<endl;
    	cout<<v2.size()<<endl;
    	for (i=0;i<v2.size();i++)
    		cout<<v2[i]<<" ";

    }
}
