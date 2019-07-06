#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll n,m,a[1000][1000],vis[1000][1000],c=0;
ll check(ll i,ll j,ll x)
{
	if (i>=0 and i<n and j>=0 and j<m)
	{
		if (!vis[i][j] and a[i][j]==x)	return 1;
		else	return 0;
	}
	else	return 0;
}
void dfs(ll i,ll j)
{
	vis[i][j]=1;
	c++;
	if (check(i,j+1,a[i][j]))	dfs(i,j+1);
	if (check(i-1,j,a[i][j]))	dfs(i-1,j);
	if (check(i,j-1,a[i][j]))	dfs(i,j-1);
	if (check(i+1,j,a[i][j]))	dfs(i+1,j);
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
	a[n][m];vis[n][m];
	ll i,j;
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
			cin>>a[i][j];
	}
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			vis[i][j]=0;
	ll ans=0;
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			if (!vis[i][j])
			{
				dfs(i,j);
				ans=max(ans,c);
				c=0;
			}
		}
	}
	cout<<ans<<endl;
}
