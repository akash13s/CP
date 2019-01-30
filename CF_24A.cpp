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
map<ll,map <ll,ll> > m;
vll adj[105];ll vis[105];
ll s,s1=0,nn;
void dfs(ll nd)
{
	vis[nd]=1;ll i;nn=nd;
	for (i=0;i<adj[nd].size();i++)
	{
		if (!vis[adj[nd][i]])
		{
			if (m[nd][adj[nd][i]]==0)
				s1+=m[adj[nd][i]][nd];
			dfs(adj[nd][i]);
		}
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
    ll n,i;cin>>n;
    for (i=0;i<n;i++)
    {
    	ll x,y,w;cin>>x>>y>>w;
    	m[x][y]=w;s+=w;
    	adj[x].pb(y);
    	adj[y].pb(x);
    }
    memset(vis,0,sizeof(vis));
    dfs(1);
    // cout<<nn<<endl;
    if (m[nn][1]==0)	s1+=m[1][nn];
    // cout<<s1<<" "<<s<<endl;
    cout<<min(s-s1,s1)<<endl;
}