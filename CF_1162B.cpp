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
    vll v[n];
    for (i=0;i<n;i++)
    {
    	for (j=0;j<m;j++)
    		cin>>a[i][j],v[i].pb(a[i][j]);
    }
    for (i=0;i<n;i++)
    {
    	for (j=0;j<m;j++)
    		cin>>b[i][j],v[i].pb(b[i][j]);
    }
    for (i=0;i<n;i++)
    {
    	sort(v[i].begin(),v[i].end());
    }
    // for (i=0;i<n;i++)
    // {
    // 	for (j=0;j<2*m;j++)
    // 		cout<<v[i][j]<<" ";
    // 	cout<<endl;
    // }
    ll c=0;
    for (i=0;i<n;i++)
    {
    	for (j=0;j<2*m-1;j++)
    	{
    		if (v[i][j]>=v[i][j+1]){
    			cout<<v[i][j]<<endl;
    			c++;
    			break;
    		}
    	}
    	if (c)	break;
    }
    if (c)	cout<<"Impossible"<<endl;
    else
    {
    	for (i=0;i<2*m;i++)
    	{
    		for (j=0;j<n-1;j++)
    		{
    			if (v[i][j]>=v[i+1][j])
    			{
    				c++;break;
    			}
    		}
    		if (c)	break;
    	}
    	if (c)	cout<<"Impossible"<<endl;
    	else	cout<<"Possible"<<endl;
    }
}
