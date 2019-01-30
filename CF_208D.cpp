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
#define PII pair <ll,ll>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n;cin>>n;
	ll a[n],cost[5],c[5],i;
	for (i=0;i<n;i++)	cin>>a[i];
	for (i=0;i<5;i++)	cin>>cost[i];
	ll idx,rem=0,k;memset(c,0,sizeof(c));

	for (i=0;i<n;i++)
	{
		rem+=a[i];
		if (rem>=cost[0] and rem<=cost[4])
		{
			while (rem>=cost[0])
			{
				if (binary_search(cost,cost+5,rem))
				{
					idx=lower_bound(cost,cost+5,rem)-cost;
				}
				else
				{
					idx=lower_bound(cost,cost+5,rem)-cost-1;
				}
				c[idx]++;
				rem-=cost[idx];
			}
		}
		else if (rem>cost[4]){
			k=rem/cost[4],c[4]+=k,rem-=cost[4]*k;
			while (rem>=cost[0])
			{
				if (binary_search(cost,cost+5,rem))
				{
					idx=lower_bound(cost,cost+5,rem)-cost;
				}
				else
				{
					idx=lower_bound(cost,cost+5,rem)-cost-1;
				}
				c[idx]++;
				rem-=cost[idx];
			}
		}	
	}
	for (i=0;i<5;i++)	cout<<c[i]<<" ";
	cout<<endl;
	cout<<rem<<endl;
}