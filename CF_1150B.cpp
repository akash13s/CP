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
ll n,vis[51][51];
char a[51][51];
ll check(ll i,ll j)
{
	if (i-1>=0 and j-1>=0 and i+1<n and j+1<n)
	{
		if (a[i][j+1]=='.' and !vis[i][j+1] and a[i-1][j]=='.' and !vis[i-1][j] and a[i][j-1]=='.' and !vis[i][j-1] and a[i+1][j]=='.' and !vis[i+1][j])
			return 1;
		else	return 0;
	}
	else	return 0;
}
void mark(ll i,ll j)
{
	vis[i][j]=1;
	vis[i][j+1]=1;
	vis[i-1][j]=1;
	vis[i][j-1]=1;
	vis[i+1][j]=1;
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
	a[n][n];vis[n][n];
	ll i,j,k;
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			cin>>a[i][j];
	memset(vis,(ll)0,sizeof(vis));
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (a[i][j]=='.')
			{
				k=check(i,j);
				if (k)	mark(i,j);
			}
		}
	}
	ll c=0;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (a[i][j]=='.' and !vis[i][j])
			{
				c++;
				break;
			}
		}
	}
	if (c)	cout<<"NO"<<endl;
	else	cout<<"YES"<<endl;
}
