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
vll adj[100005];ll vis[100005],in[100005],out[100005],c=0;
void calcTime(ll u)
{
	in[u]=++c;ll i,child;
	vis[u]=1;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		if (!vis[child])
			calcTime(child);
	}
	out[u]=++c;	
}
ll check(ll x,ll y)
{
	if (in[x]<in[y] and out[y]<out[x])	return 1;
	else	return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n;cin>>n;
	ll i;
	for (i=0;i<n-1;i++)
	{
		ll x,y;cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	memset(vis,0,sizeof(vis));
	calcTime(1);
	ll q;cin>>q;
	while (q--)
	{
		ll op,x,y;cin>>op>>x>>y;
		if (op==0)
		{
			if (check(x,y))	cout<<"YES"<<endl;
			else	cout<<"NO"<<endl;
		}
		else 
		{
			if (check(y,x))	cout<<"YES"<<endl;
			else	cout<<"NO"<<endl;
		}
	}
}