//AUTHOR: *Akash Shrivastva*
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
	ll n,k;cin>>n>>k;
	ll c[5001],a[n],b[n],i,j,flag=0;
	memset(c,0,sizeof(c));
	for (i=0;i<n;i++)
	{
		cin>>a[i];
		c[a[i]]++;
	}
	for (i=1;i<=5000;i++)
	{
		if (c[i]>k){
			flag++;
			break;
		}
	}
	vll v;ll co;
	if (flag)	cout<<"NO"<<endl;
	else
	{
		for (i=1;i<=5000;i++)
		{
			if (c[i]>0)	v.pb(i);
		}
		co=1;
		for (i=0;i<v.size();i++)
		{
			
			for (j=0;j<n;j++)
			{
				if (a[j]==v[i]){
					b[j]=co,co++;
					if (co>k)	co=1;
				}
			}
		}
		
		cout<<"YES"<<endl;
		for (i=0;i<n;i++)
			cout<<b[i]<<" ";
		
	}
}
