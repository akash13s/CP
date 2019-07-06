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
ll a[100005],n,s[100005];
vll v;
map<ll,ll> m;
void sieve()
{
	ll i,j;
	for (i=2;i*i<=n;i++)
	{
		if (a[i])
		{
			for (j=i*i;j<=n;j+=i)
				a[j]=0,s[j]=i;
		}
	}
	for (i=2;i<=n;i++)
	{
		if (a[i])	v.pb(i);
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
	cin>>n;
	a[n+1];s[n+1];
	ll i,j;
	for (i=0;i<=n;i++)	a[i]=1;
	for (i=0;i<=n;i++)	s[i]=i;
	sieve();
	// for (i=0;i<v.size();i++)	cout<<v[i]<<endl;
	
	for (i=0;i<v.size();i++)
		m[v[i]]=i+1;
	for (i=2;i<=n;i++)	cout<<m[s[i]]<<" ";
}
