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
	ll n,i;cin>>n;
	ll a[n];
	for (i=0;i<n;i++)	cin>>a[i];
	ll b[n],ans=1;map<ll,ll> vis;
	b[0]=1;vis[a[0]]=1;
	for (i=1;i<n;i++)
	{
		if (!vis[a[i]])
		{
			vis[a[i]]=1;
			b[i]=2;
		}
		else	b[i]=1;
	}
	for (i=0;i<n;i++)
		ans*=b[i],ans%=998244353;
	cout<<ans<<endl;
}
