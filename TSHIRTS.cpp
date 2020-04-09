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
vector < ll > v[103];
ll MAX,dp[1025][103];
ll toll(const string &s) { stringstream ss; ss << s; ll x; ss >> x; return x; }

ll f(ll mask, ll i)
{
	if (i==101)	{
		if (mask==MAX)	return dp[mask][i]=1;
		else return dp[mask][i]=0;
	}
	else if (dp[mask][i]!=-1)	return dp[mask][i];
	else
	{
		ll j,ans=0,k;
		ans+=f(mask,i+1);
		for (j=0;j<v[i].size();j++)
		{
			k=v[i][j]-1;
			if (mask & (1<<k))	continue;
			else ans+=f(mask | (1<<k), i+1)%M;
		}
		dp[mask][i]=ans%M;
		return dp[mask][i];
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
	ll t;cin>>t;
	while (t--)
	{
		memset(dp,-1,sizeof(dp));
		ll n;
		cin>>n;
		MAX=(1<<n)-1;
		ll i,j,k,x;
		string ss,temp;

		for (i=0;i<=100;i++)	v[i].clear();
		for (i=1;i<=n;i++)
		{
			cin>>k;
			for (j=0;j<k;j++)
			{
				cin>>x;
				v[x].pb(i);
			}
		}
		cout<<f(0,1)%M<<endl;
	}
}