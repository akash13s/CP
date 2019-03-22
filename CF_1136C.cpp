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
	ll n,m;cin>>n>>m;
	ll a[n][m],b[n][m],i,j;
	vll v1[n+m],v2[m+n];
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++){
			cin>>a[i][j],v1[i+j].pb(a[i][j]);
		}
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++){
			cin>>b[i][j],v2[i+j].pb(b[i][j]);
		}
	}
	
	ll c=0;
	for (i=0;i<n+m;i++)
		sort(v1[i].begin(),v1[i].end()),sort(v2[i].begin(),v2[i].end());

	for (i=0;i<n+m;i++)
	{
		for (j=0;j<v1[i].size();j++)
		{
			if (v1[i][j]!=v2[i][j])
			{
				c++;break;
			}
		}
	}
	if (c)	cout<<"NO";
	else	cout<<"YES";
}