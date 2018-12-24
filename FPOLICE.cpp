//AUTHOR: *Akash Shrivastva*
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
    	ll n,T,i,j;cin>>n>>T;
    	ll time[n][n],risk[n][n],dp[n];
    	for (i=0;i<n;i++)
    		for (j=0;j<n;j++)
    			cin>>time[i][j];

    	for (i=0;i<n;i++)
    		for (j=0;j<n;j++)
    			cin>>risk[i][j];

    	for (i=0;i<n;i++)
    	{
    		for (j=0;j<n;j++)
    		{
    			if (i==j)
    				risk[i][j]=INT_MAX;
    		}
    	}
    	dp[n-1]=0;
    	for (i=n-2;i>=0;i--)
    	{
    		dp[i]=INT_MAX;
    		for(j=i;j<n;j++)
    		{
    			if (risk[i][j]==INT_MAX)
    				continue;
    			dp[i]=min(dp[i],risk[i][j]+dp[j]);
    		}
    	}	
    	ll c=dp[0],ans1=dp[0],ans2=0;
    	i=0;ll ti=INT_MAX,ind;
    	while (c!=0)
    	{
    		for (j=0;j<n;j++)
    		{
    			if (risk[i][j]!=INT_MAX and risk[i][j]+dp[j]==c)
    			{
    				if (time[i][j]<ti)
    					ti=time[i][j],ind=j;
    			}
    		}
    		ans2+=ti;
    		c-=risk[i][ind];
    		i=ind;ti=INT_MAX;
    	}
    	if (ans2>T)
    		cout<<-1<<endl;
    	else
    		cout<<ans1<<" "<<ans2<<endl; 
    }
}
