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
vll adj[1001];
ll vis[1001];
stack<ll> s;
void topoSort(ll u)
{
	vis[u]=1;
	ll i,child;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		if (!vis[child])	topoSort(child);
	}
	s.push(u);
}
bool comp(PII a,PII b)
{
	if (a.F<b.F)	return true;
	else	if (a.F>b.F)	return false;
	else
	{
		if (a.S<b.S)	return true;
		else	return false;
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
	ll t,i,j;cin>>t;
	for (i=1;i<=t;i++)
	{
		ll n,r;cin>>n>>r;
		adj[n];vis[n];
		map< PII,ll > m;
		while (!s.empty())	s.pop();
		for (j=0;j<n;j++)	vis[j]=0,adj[j].clear();
		while (r--)
		{
			ll x,y;cin>>x>>y;
			m[mp(x,y)]++;
			adj[x].pb(y);
		}
		for (j=0;j<n;j++)	sort(adj[j].begin(),adj[j].end());
		for (j=0;j<n;j++)
		{
			if (!vis[j])	topoSort(j);
		}
		vll v;
		while (!s.empty())	v.pb(s.top()),s.pop();
		reverse(v.begin(),v.end());
		cout<<"Scenario #"<<i<<":"<<endl;
		ll a[n];
		memset(a,(ll)0,sizeof(a));
		a[0]=1;
		for (j=1;j<v.size();j++)
		{
			if (m[mp(v[j],v[j-1])])	a[j]=a[j-1]+1;
			else	a[j]=a[j-1];
		}
		pll v1;
		for (j=0;j<v.size();j++)	v1.pb(mp(a[j],v[j]));
		sort(v1.begin(),v1.end(),comp);
		for (j=0;j<v1.size();j++)	cout<<v1[j].F<<" "<<v1[j].S<<endl;
	}
}
