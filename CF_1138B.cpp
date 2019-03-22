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
	ll a[n][m],i,j;
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	set<ll> s;
	ll e[n],w[m];
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
			s.insert(a[i][j]);
		e[i]=s.size();
		s.clear();
	}
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
			s.insert(a[i][j]);
		w[i]=s.size();
		s.clear();
	}
	ll ans[n][m];
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			ans[i][j]=max(e[i],w[j]);
		}
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
			cout<<ans[i][j]<<" ";
		cout<<endl;
	}
}