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
	ll t;cin>>t;
	while (t--)
	{
		ll n,m;cin>>n>>m;
		ll a[n][m],i,j,ma=0;
		for (i=0;i<n;i++){
			for (j=0;j<m;j++){
				cin>>a[i][j];
				if (a[i][j]>ma)	ma=a[i][j];
			}
		}
		set < pair <ll, PII > > s;
		ll dis[n][m];
		for (i=0;i<n;i++)
		{
			for (j=0;j<m;j++)
			{
				if (a[i][j]==ma)	s.insert(mp(0,mp(i,j))),dis[i][j]=0;
				else	s.insert(mp(INT_MAX,mp(i,j))),dis[i][j]=INT_MAX;
			}
		}
		ll x,y,d;
		while (!s.empty())
		{
			auto itr=s.begin();
			i=itr->S.F;
			j=itr->S.S;
			d=itr->F;
			if (i<n and j+1<m and d+1<dis[i][j+1])
			{
				auto itr1=s.find(mp(dis[i][j+1],mp(i,j+1)));
				s.erase(itr1);
				dis[i][j+1]=d+1;
				s.insert(mp(dis[i][j+1],mp(i,j+1)));
			}
			if (i+1<n and j<m and d+1<dis[i+1][j])
			{
				auto itr1=s.find(mp(dis[i+1][j],mp(i+1,j)));
				s.erase(itr1);
				dis[i+1][j]=d+1;
				s.insert(mp(dis[i+1][j],mp(i+1,j)));
			}
			if (i<n and j-1>=0 and d+1<dis[i][j-1])
			{
				auto itr1=s.find(mp(dis[i][j-1],mp(i,j-1)));
				s.erase(itr1);
				dis[i][j-1]=d+1;
				s.insert(mp(dis[i][j-1],mp(i,j-1)));
			}
			if (i-1>=0 and j<m and d+1<dis[i-1][j])
			{
				auto itr1=s.find(mp(dis[i-1][j],mp(i-1,j)));
				s.erase(itr1);
				dis[i-1][j]=d+1;
				s.insert(mp(dis[i-1][j],mp(i-1,j)));
			}
			if (i-1>=0 and j+1<m and d+1<dis[i-1][j+1])
			{
				auto itr1=s.find(mp(dis[i-1][j+1],mp(i-1,j+1)));
				s.erase(itr1);
				dis[i-1][j+1]=d+1;
				s.insert(mp(dis[i-1][j+1],mp(i-1,j+1)));
			}
			if (i+1<n and j+1<m and d+1<dis[i+1][j+1])
			{
				auto itr1=s.find(mp(dis[i+1][j+1],mp(i+1,j+1)));
				s.erase(itr1);
				dis[i+1][j+1]=d+1;
				s.insert(mp(dis[i+1][j+1],mp(i+1,j+1)));
			}
			if (i+1<n and j-1>=0 and d+1<dis[i+1][j-1])
			{
				auto itr1=s.find(mp(dis[i+1][j-1],mp(i+1,j-1)));
				s.erase(itr1);
				dis[i+1][j-1]=d+1;
				s.insert(mp(dis[i+1][j-1],mp(i+1,j-1)));
			}
			if (i-1>=0 and j-1>=0 and d+1<dis[i-1][j-1])
			{
				auto itr1=s.find(mp(dis[i-1][j-1],mp(i-1,j-1)));
				s.erase(itr1);
				dis[i-1][j-1]=d+1;
				s.insert(mp(dis[i-1][j-1],mp(i-1,j-1)));
			}
			s.erase(itr);
		}
		ma=0;
		for (i=0;i<n;i++)
		{
			for (j=0;j<m;j++)
			{
				if (dis[i][j]>ma)	ma=dis[i][j];
			}
		}
		cout<<ma<<endl;
	}	
}