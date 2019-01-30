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
	ll n,m;cin>>n>>m;
	ll a[n+1],i,j,c=0;
	set<ll> s;memset(a,0,sizeof(a));
	for (i=0;i<m;i++)
	{
		ll x;cin>>x;
		a[x]++;
		s.insert(x);
		if (s.size()==n)
		{
			cout<<1;
			for (j=1;j<=n;j++)
			{
				a[j]--;
				if (a[j]==0)	s.erase(j);
			}
		}
		else	cout<<0;
	}	
}
