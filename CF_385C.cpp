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
#define MAXN 10000001
ll vis[MAXN],prime[MAXN],f[MAXN],pre[MAXN];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    ll n;cin>>n;
    ll a[n],i,j,ma=INT_MIN;
    memset(prime,1,sizeof(prime));
	memset(vis,0,sizeof(vis));
	memset(pre,0,sizeof(pre));
	memset(f,0,sizeof(f));
    for (i=0;i<n;i++)	cin>>a[i],vis[a[i]]++,ma=max(ma,a[i]);
	for (i=2;i<=ma;i++)
	{
		if (prime[i])
		{
			if (vis[i])	f[i]+=vis[i];
			for (j=2*i;j<=ma;j+=i)
			{
				if (vis[j])
					f[i]+=vis[j];
				prime[j]=0;	
			}
		}
	}
	// for (i=1;i<=15;i++)	cout<<i<<" "<<f[i]<<endl;
	f[0]=0;f[1]=0;pre[1]=pre[0]=0;
	for (i=2;i<MAXN;i++)
		pre[i]=pre[i-1]+f[i];
	ll m;cin>>m;
	while (m--)
	{
		ll l,r;cin>>l>>r;
		if (r<MAXN)	cout<<pre[r]-pre[l-1]<<"\n";
		else if (l<MAXN) cout<<pre[MAXN-1]-pre[l-1]<<"\n";
		else	cout<<0<<"\n";
	}
}