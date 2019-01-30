//AUTHOR: *Akash Shrivastva*
//Birla Institute of Technology,Mesra,India
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define M 998244353 
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define pll vector< pair <ll,ll> >
#define F first
#define S second
#define PII pair <ll,ll>
ll k,o,z;
ll modularExponentiation(ll x,ll n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%M,n/2);
    else                             //n is odd
        return (x*modularExponentiation((x*x)%M,(n-1)/2))%M;

}
ll isBipartite(ll u,ll vis[],ll color[],vll adj[])
{
	k++;
	ll i,child;
	for (i=0;i<adj[u].size();i++)
	{
		child=adj[u][i];
		if (!vis[child])
		{
			vis[child]=1;
			color[child]=!color[u];
			if (color[child]==0)	z++;
			else o++;
			if (!isBipartite(child,vis,color,adj))	return 0;
		}
		else if (color[u]==color[child])	return 0;
	}
	return 1;
}
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
		vll adj[n+1];ll i,vis[n+1],color[n+1],p,ans=1;
		for (i=0;i<m;i++)	
		{
			ll x,y;cin>>x>>y;
			adj[x].pb(y);
			adj[y].pb(x);
		}
		// if (m==0)	cout<<0<<endl;
		// else{
		memset(vis,0,sizeof(vis));
		for (i=1;i<=n;i++)
		{
			if (!vis[i])
			{
				o=0,z=0,k=0;
				vis[i]=1,color[i]=1,o++;
				if (isBipartite(i,vis,color,adj))
				{
					// if (k>1)	cout<<k<<endl;
					p=(modularExponentiation(2,o)%M+modularExponentiation(2,z)%M)%M;
					ans*=p;ans%=M;
				}
				else
				{
					ans=0;break;
				}
			}
		}
		cout<<ans%M<<endl;
		// }
	}
}