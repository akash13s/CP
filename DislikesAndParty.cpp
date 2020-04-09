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
	ll n;cin>>n;
	map <ll, map <ll,ll> > m;
	ll i,j,ans,x,y;
	ans = (n*(n-1))/2;
	for (i=0;i<10;i++)
	{
		cin>>x;
		for (j=0;j<9;j++)
		{
			cin>>y;
			if (m[x][y] or m[y][x])	continue;
			else	m[x][y]=1,ans-=1;
		}
	}
	cout<<ans<<endl;
}