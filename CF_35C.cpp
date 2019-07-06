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
ll d[501][501];
set< pair<ll, PII > >s;
ll n,m,k;
void check(ll i,ll j,ll dis)
{
	if (i>=0 and i<n and j>=0 and j<m)
	{
		if (dis+1<d[i][j])
		{
			auto itr=s.find(mp(d[i][j],mp(i,j)));
			s.erase(itr);
			d[i][j]=dis+1;
			s.insert(mp(d[i][j],mp(i,j)));
		}
	}
}
void bfs()
{
	while (!s.empty())
	{
		ll i,j,nd,dis;
		dis=s.begin()->F;
		i=s.begin()->S.F;
		j=s.begin()->S.S;
		check(i,j+1,dis);
		check(i-1,j,dis);
		check(i,j-1,dis);
		check(i+1,j,dis);
		s.erase(s.begin());
	}
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
	d[n][m];
	ll i,j;
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			d[i][j]=INT_MAX;
	cin>>k;
	for (i=0;i<k;i++)
	{
		ll x,y;cin>>x>>y;
		x--;y--;
		d[x][y]=0;
		s.insert(mp(0,mp(x,y)));
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			if (d[i][j]==INT_MAX)
				s.insert(mp(INT_MAX,mp(i,j)));
		}
	}
	bfs();
	ll dm=0,le=0,ri=0;
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			if (d[i][j]>dm)
				dm=d[i][j],le=i,ri=j;
		}
	}
	cout<<le+1<<" "<<ri+1<<endl;
}
