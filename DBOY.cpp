
#include <bits/stdc++.h>
#define hell 1000000007
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int h[n], k[n], mx = -1;
		for(int i=0;i<n;i++)
		{
			cin >> h[i];
			mx = max(mx, 2*h[i]);
		}
		for(int i=0;i<n;i++)
		{
			cin >> k[i];
		}
		long long dp[1005];
		for(int i=0;i<1005;i++)
		{
			dp[i] = hell;
		}
		dp[0] = 0;
		for(int i=0;i<n;i++)
		{
			for(int j=k[i];j<=mx;j++)
			{
				dp[j] = min(dp[j], dp[j-k[i]] + 1);
			}
		}
		long long ans= 0;
		for(int i=0;i<n;i++)
		{
			ans += dp[2*h[i]];
		}
		cout << ans << "\n";
	}		
	return 0;
}