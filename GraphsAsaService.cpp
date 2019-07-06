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
	ll t,h;cin>>t;
	for (h=1;h<=t;h++)
	{
		ll n,m;cin>>n>>m;
		ll a[n+1][n+1],i,j,k;
		for (i=0;i<=n;i++)
		{
			for (j=0;j<=n;j++)
			{
				if (i==j)	a[i][j]=0;
				else	a[i][j]=INT_MAX;
			}
		}
		vector < pair <ll, PII > > v;
		for (i=0;i<m;i++)
		{
			ll x,y,w;cin>>x>>y>>w;
			v.pb(mp(w,mp(x,y)));
			a[x][y]=a[y][x]=w;
		}
		for (k=1;k<=n;k++)
		{
			for (i=1;i<=n;i++)
			{
				for (j=1;j<=n;j++)
				{
					a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
				}
			}
		}
		ll flag=0;
		for (i=0;i<v.size();i++)
		{
			ll x,y,w;
			x=v[i].S.F,y=v[i].S.S,w=v[i].F;
			if (a[x][y]!=w)
			{
				flag++;
				break;
			}
		}
		if (flag)	cout<<"Case #"<<h<<": Impossible"<<endl;
		else
		{
			cout<<"Case #"<<h<<": "<<v.size()<<endl;
			for (i=0;i<v.size();i++)
				cout<<v[i].S.F<<" "<<v[i].S.S<<" "<<v[i].F<<endl;
		}
	}
}
