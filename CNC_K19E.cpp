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

ll vis[1001][1001],a[1001][1001];
ll n,m,c=0,ans=0;
ll check(ll i,ll j)
{
	if (i>=0 and i<n and j>=0 and j<m and a[i][j]!=0 and vis[i][j]==0)
		return 1;
	else	return 0;
}
void dfs(ll i,ll j)
{
	vis[i][j]=1;
	// cout<<i<<" "<<j<<endl;
	if (a[i][j]==1)	c++;
	if (check(i,j+1))	dfs(i,j+1);
	if (check(i,j-1))	dfs(i,j-1);
	if (check(i+1,j))	dfs(i+1,j);
	if (check(i-1,j))	dfs(i-1,j);
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
    a[n][m];ll i,j;vis[n][m];
    memset(vis,0,sizeof(vis));
    for (i=0;i<n;i++)
    {
    	for (j=0;j<m;j++)
    		cin>>a[i][j];
    }
    for (i=0;i<n;i++)
    {
    	for (j=0;j<m;j++)
    	{
    		if (a[i][j]!=0 and !vis[i][j]){
    			c=0;
    			dfs(i,j);
    			ans=max(ans,c);
    		}
    	}
    }
    cout<<ans<<endl;
}
