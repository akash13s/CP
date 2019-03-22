//AUTHOR: *Akash Shrivastva*
//Birla Institute of Technology,Mesra,India
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define M 200005
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define pll vector< pair <ll,ll> >
#define F first
#define S second
#define PII pair <ll,ll>
vll adj[M],in[M];ll vis[M];
double p[M];stack <ll> s;
void topoSort(ll u)
{
	vis[u]=1;
	ll i,child;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		if (!vis[child])
			topoSort(child);
	}
	s.push(u);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n,m,r;cin>>n>>m>>r;
	ll i;adj[n+1];in[n+1];p[n+1];
	for (i=0;i<m;i++)
	{
		ll x,y;cin>>x>>y;
		adj[x].pb(y);
		in[y].pb(x);
	}
	memset(vis,0,sizeof(vis));
	topoSort(r);
	vll a;
	while (!s.empty())
	{
		a.pb(s.top());
		// cout<<s.top()<<endl;
		s.pop();
	}
	ll j,nd,par;
	memset(p,0,sizeof(p));
	p[r]=1.0;
	for (i=0;i<a.size();i++)
	{
		nd=a[i];
		for (j=0;j<in[nd].size();j++)
		{
			par=in[nd][j];
			p[nd]+=(double)((double)p[par]/(double)adj[par].size());
		}
	}
	double pm=0.0;
	for (i=1;i<=n;i++)
	{
		if (i!=r)
		{
			if (p[i]>pm)	pm=p[i];
		}
	}
	vll v1;double prec=(double)pow(10,-9);
	for (i=1;i<=n;i++)
	{
		if (abs(p[i]-pm)<=prec and adj[i].size()==0)	v1.pb(i);
	}
	for (i=0;i<v1.size();i++)	cout<<v1[i]<<" ";
}