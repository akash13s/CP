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
char a[51][51];
ll n;
ll vis1[51][51],vis2[51][51];
pll v1,v2;
ll check1(ll x,ll y)
{
	if (x>=1 and y>=1 and x<=n and y<=n and a[x][y]=='0' and vis1[x][y]==0)
		return 1;
	else	return 0;
}
ll check2(ll x,ll y)
{
	if (x>=1 and y>=1 and x<=n and y<=n and a[x][y]=='0' and vis2[x][y]==0)
		return 1;
	else	return 0;
}
void dfs1(ll x,ll y)
{
	vis1[x][y]=1;
	v1.pb(mp(x,y));
	if (check1(x+1,y))	dfs1(x+1,y);
	if (check1(x,y+1))	dfs1(x,y+1);
	if (check1(x,y-1))	dfs1(x,y-1);
	if (check1(x-1,y))	dfs1(x-1,y);
}
void dfs2(ll x,ll y)
{
	vis2[x][y]=1;
	v2.pb(mp(x,y));
	if (check2(x+1,y))	dfs2(x+1,y);
	if (check2(x,y+1))	dfs2(x,y+1);
	if (check2(x,y-1))	dfs2(x,y-1);
	if (check2(x-1,y))	dfs2(x-1,y);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	cin>>n;
	ll r1,c1,r2,c2;cin>>r1>>c1>>r2>>c2;
	ll i,j;a[n+1][n+1];vis1[n+1][n+1];vis2[n+1][+1];
	memset(vis1,0,sizeof(vis1));
	memset(vis2,0,sizeof(vis2));
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)	cin>>a[i][j];
	}
	dfs1(r1,c1);
	dfs2(r2,c2);
	ll ans=INT_MAX;
	// for (i=0;i<v1.size();i++)	cout<<v1[i].F<<" "<<v1[i].S<<endl;
	for (i=0;i<v1.size();i++)
	{
		for (j=0;j<v2.size();j++)
		{
			ans=min(ans,(v1[i].F-v2[j].F)*(v1[i].F-v2[j].F)+(v1[i].S-v2[j].S)*(v1[i].S-v2[j].S));
		}
	}
	cout<<ans<<endl;
}