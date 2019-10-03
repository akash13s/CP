//AUTHOR: *Akash Shrivastva*
//Birla Institute of Technology,Mesra,India
#include<bits/stdc++.h>
#define ll long long int
#define maxx 5000005
using namespace std;
ll spf[maxx],dp[maxx],sum[maxx];
void sieve()
{
	for(ll i=2;i<maxx;i++)
	{
		if(spf[i]==0)
		{
			for(ll j=i;j<maxx;j+=i)
			{
				if(spf[j]==0)
					spf[j]=i;
			}
		}
	}
	dp[0]=dp[1]=0;
	for(ll i=2;i<maxx;i++)
	{
		dp[i]=dp[i/spf[i]]+1;
	}
	sum[0]=0;
	for(ll i=1;i<maxx;i++)
		sum[i]=sum[i-1]+dp[i];
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	sieve();
	ll t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>b>>a;
		cout<<sum[a]-sum[b]<<"\n";
	}
	return 0;
}