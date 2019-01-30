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
	ll t;cin>>t;
	while (t--)
	{
		ll n,m,i,j;cin>>n>>m;
		char a[n][m];ll vis[n][m];
		memset(vis,0,sizeof(vis));
		for (i=0;i<n;i++){
			for (j=0;j<m;j++)
				cin>>a[i][j];
		}

		ll i1,i2,j1,j2;
		for (i=0;i<n;i++)
		{
			for (j=0;j<m;j++)
			{
				// cout<<a[i][j]<<endl;
				if (a[i][j]=='S')
					i1=i,j1=j;
				if (a[i][j]=='F')
					i2=i,j2=j;
			}
		}
		queue < pair <ll, PII > > q;
		q.push(mp(0,mp(i1,j1)));
		vis[i1][j1]=1;
		ll x,y,flag=0;
		while (!q.empty())
		{
			x=q.front().S.F;
			y=q.front().S.S;
			if (a[x][y]=='F')
			{
				flag=1;
				cout<<q.front().F-1<<endl;
				break;
			}
			if (x>=0 and x<n and y+1>=0 and y+1<m)
			{
				if (!vis[x][y+1] and a[x][y+1]!='X')
					vis[x][y+1]=1,q.push(mp(q.front().F+1,mp(x,y+1)));
			}
			if (x-1>=0 and x-1<n and y+1>=0 and y+1<m)
			{
				if (!vis[x-1][y+1] and a[x-1][y+1]!='X')
					vis[x-1][y+1]=1,q.push(mp(q.front().F+1,mp(x-1,y+1)));
			}
			if (x-1>=0 and x-1<n and y>=0 and y<m)
			{
				if (!vis[x-1][y] and a[x-1][y]!='X')
					vis[x-1][y]=1,q.push(mp(q.front().F+1,mp(x-1,y)));
			}
			if (x-1>=0 and x-1<n and y-1>=0 and y-1<m)
			{
				if (!vis[x-1][y-1] and a[x-1][y-1]!='X')
					vis[x-1][y-1]=1,q.push(mp(q.front().F+1,mp(x-1,y-1)));
			}
			if (x>=0 and x<n and y-1>=0 and y-1<m)
			{
				if (!vis[x][y-1] and a[x][y-1]!='X')
					vis[x][y-1]=1,q.push(mp(q.front().F+1,mp(x,y-1)));
			}
			if (x+1>=0 and x+1<n and y-1>=0 and y-1<m)
			{
				if (!vis[x+1][y-1] and a[x+1][y-1]!='X')
					vis[x+1][y-1]=1,q.push(mp(q.front().F+1,mp(x+1,y-1)));
			}
			if (x+1>=0 and x+1<n and y>=0 and y<m)
			{
				if (!vis[x+1][y] and a[x+1][y]!='X')
					vis[x+1][y]=1,q.push(mp(q.front().F+1,mp(x+1,y)));
			}
			if (x+1>=0 and x+1<n and y+1>=0 and y+1<m)
			{
				if (!vis[x+1][y+1] and a[x+1][y+1]!='X')
					vis[x+1][y+1]=1,q.push(mp(q.front().F+1,mp(x+1,y+1)));
			}
			q.pop();
		}
		if (flag==0)	cout<<"-1"<<endl;
	}
}
