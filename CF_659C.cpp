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
#define MAXN 2000000
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n,m;cin>>n>>m;
	ll a[n],i;map <ll,ll> m1;
	for (i=0;i<n;i++)	cin>>a[i],m1[a[i]]=1;
	vll v;ll s=0;
	for (i=1;i<=MAXN;i++)
	{
		if (m1[i]==0)
		{
			if (i+s<=m)	s+=i,v.pb(i);
			else	break;
		}	
	}
	cout<<v.size()<<endl;
	for (i=0;i<v.size();i++)	cout<<v[i]<<" ";
}