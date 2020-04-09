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
ll n;
ll check(ll x, ll y)
{
	if (x>=0 and x<=1 and y>=0 and y<n)
		 return 1;
	else 	return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll q;cin>>n>>q;
	ll a[2][n],i,j;
	memset(a,0,sizeof(a));
	ll v=0,l=0,r=0;
	while (q--)
	{
		ll x,y;cin>>x>>y;
		x--,y--;
		a[x][y]=!a[x][y];
		if (a[x][y])
		{
			if (x==0)
			{
				if (a[x+1][y])	v++;
				if (check(x+1,y+1) and a[x+1][y+1]) l++;
				if (check(x+1,y-1) and a[x+1][y-1]) r++;
			}
			else 
			{
				if (a[x-1][y])	v++;
				if (check(x-1,y+1) and a[x-1][y+1]) r++;
				if (check(x-1,y-1) and a[x-1][y-1]) l++;
			}
		}
		else
		{
			if (x==0)
			{
				if (a[x+1][y])	v--;
				if (check(x+1,y+1) and a[x+1][y+1]) l--;
				if (check(x+1,y-1) and a[x+1][y-1]) r--;
			}
			else 
			{
				if (a[x-1][y])	v--;
				if (check(x-1,y+1) and a[x-1][y+1]) r--;
				if (check(x-1,y-1) and a[x-1][y-1]) l--;
			}
		}
		if (v or l or r)	cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}
}