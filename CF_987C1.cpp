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
	ll n,i,j;cin>>n;
	ll c[n],s[n];
	for (i=0;i<n;i++)
		cin>>s[i];
	for (i=0;i<n;i++)
		cin>>c[i];
	ll ans=INT_MAX,k1,k2;
	for (i=1;i<n-1;i++)
	{
		k1=INT_MAX;
		for (j=0;j<i;j++)
		{
			if (s[j]<s[i])
			{
				k1=min(k1,c[j]);
			}
		}
		k2=INT_MAX;
		for (j=i+1;j<n;j++)
		{
			if (s[j]>s[i])
			{
				k2=min(k2,c[j]);
			}
		}
		ans=min(ans,k1+k2+c[i]);
	}
	if (ans==INT_MAX)	cout<<-1;
	else	cout<<ans;
}
