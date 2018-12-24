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
	
	ll n,i;cin>>n;
	string a,b;
	cin>>a>>b;
	ll ans=0;
	for (i=0;i<n-1;i++)
	{
		if (a[i]==b[i])
			continue;
		else
		{
			if (a[i+1]==b[i+1])
				ans+=1;
			else if (a[i+1]!=b[i+1] and a[i+1]!=a[i])
				ans+=1,i++;
			else
				ans+=1;
		}
	}
	if (i==n-1)
	{
		if (a[n-1]!=b[n-1])	ans++;
	}
	cout<<ans<<endl;
}
