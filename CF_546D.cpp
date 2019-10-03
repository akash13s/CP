//AUTHOR: *Akash Shrivastva*
//Birla Institute of Technology,Mesra,India
#include<bits/stdc++.h>
#define ll long long int
#define maxx 5000005
using namespace std;
ll pd[maxx],dp[maxx],sum[maxx];
void sieve()
{
	for(ll i=2;i<maxx;i++)
	{
		if(pd[i]==0)
		{
			for(ll j=i;j<maxx;j+=i)
			{
				if(pd[j]==0)
					pd[j]=i;
			}
		}
	}
	dp[0]=dp[1]=0;
	for(ll i=2;i<maxx;i++)
	{
		dp[i]=dp[i/pd[i]]+1;
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
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&b,&a);
		printf("%lld\n",sum[a]-sum[b]);
	}
	return 0;
}