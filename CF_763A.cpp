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
ll n,c[100005];vll adj[100005];bool ans;
// map<ll,ll> m1;
bool dfs(ll u,ll par,ll color)
{
	ll i,child;
	ans=ans&(c[u]==color);
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		if (child==par)	continue;
		dfs(child,u,c[u]);
	}
	return ans;
}
bool check(ll u)
{
	ans=true;
	ll i,child;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		ans=ans&dfs(child,u,c[child]);
	}
	return ans;
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
	ll i,j;adj[n+1];c[n+1];

	for (i=0;i<n-1;i++)
	{
		ll x,y;cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
		// m1[x][y]=1;m1[y][x]=1;
	}
	for (i=1;i<=n;i++)	cin>>c[i];
	ll f=0,r1,r2;
	for (i=1;i<=n;i++)
	{
		for (j=0;j<adj[i].size();j++)
		{
			if (c[i]!=c[adj[i][j]])
			{
				r1=i;r2=adj[i][j];
				f++;break;
			}
		}
	}
	if (f==0)	cout<<"YES"<<endl,cout<<1<<endl;
	else
	{
		bool k1=check(r1);
		bool k2=check(r2);
		if (k1)	cout<<"YES"<<endl,cout<<r1<<endl;
		else if (k2)	cout<<"YES"<<endl,cout<<r2<<endl;
		else	cout<<"NO"<<endl;
	}	
}