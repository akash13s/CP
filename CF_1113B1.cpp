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
ll isPrime(ll n)
{
	ll i,c=0;
	for (i=2;i*i<=n;i++)
	{
		if (n%i==0)
		{
			c++;
			break;
		}
	}
	if (c)	return 0;
	else	return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	ll n;cin>>n;
	ll a[n],i,j;ll s=0;
	for (i=0;i<n;i++)	cin>>a[i],s+=a[i];
	vll v[101];v[1].pb(1),v[1].pb(1);
	for (i=2;i<=100;i++)
	{
		if (isPrime(i))
			v[i].pb(1),v[i].pb(i);
		else{
		for (j=1;j*j<=i;j++)
		{
			if (i%j==0)
			{
				v[i].pb(j);
				if (j!=i/j)	v[i].pb(i/j);
			}
		}
		}
	}

	ll gm,mi,ma;
	sort(a,a+n);
	gm=a[0];ll s1=s;
	for (i=0;i<n;i++)
	{
		if (isPrime(a[i]))
			continue;
		else
		{
			for (j=0;j<v[a[i]].size();j++)
			{
				ll k=s1-a[i]-gm+a[i]/v[a[i]][j]+gm*v[a[i]][j];
				// cout<<k<<endl;
				if (k>0)
				s=min(s,k);
			}
		}
	}
	cout<<s<<endl;
}