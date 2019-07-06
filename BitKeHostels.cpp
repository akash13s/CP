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
ll n,m,vis[501][501],c=0;
char a[501][501];
ll check(ll i,ll j)
{
	if (i<n and j<m and a[i][j]=='.' and !vis[i][j] )
		return 1;
	else return 0;
}
void dfs(ll i,ll j)
{
	vis[i][j]=1;
	c++;
	if (check(i,j+1))	dfs(i,j+1);
	if (check(i-1,j))	dfs(i-1,j);
	if (check(i,j-1))	dfs(i,j-1);
	if (check(i+1,j))	dfs(i+1,j);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	cin>>n>>m;
	ll i,j;a[n][m];
	memset(vis,(ll)0,sizeof(vis));
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
			cin>>a[i][j];
	}
	ll ans=0;
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			if (a[i][j]=='.' and !vis[i][j])
			{
				dfs(i,j);
				ans=max(ans,c);
				c=0;
			}
		}
	}
	cout<<ans<<endl;
}
