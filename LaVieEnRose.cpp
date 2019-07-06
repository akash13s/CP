//AUTHOR: *Akash Shrivastva*
//Birla Institute of Technology,Mesra,India
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define M 5000
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define pll vector< pair <ll,ll> >
#define F first
#define S second
#define PII pair <ll,ll>
void sieve(ll a[])
{
	ll i,j;
	for (i=2;i*i<=M;i++)
	{
		if (a[i])
		{
			for (j=i*i;j<=M;j+=i)
				a[j]=0;
		}
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
	ll i,j;
	ll a[M+1],b[M+1],k,c=0;
	for (i=0;i<=M;i++)	a[i]=1;
	sieve(a);
	b[1]=1;
	for (i=2;i<=M;i++)
	{
		if (a[i])
		{
			k=2*i-1;
			b[i]=k;
		}
		else
		{
			k=1;c=0;
			for (j=1;j*j<=i;j++)
			{
				if (i%j==0)	
				{
					k+=j;c++;
					if (i/j!=j)	k+=i/j,c++;
				}
			}
			b[i]=k+1+(i-c);
		}
	}

	for (i=1;i<=20;i++)	cout<<i<<" "<<b[i]<<endl;
	// pll v;
	// for (i=1;i<=M;i++)
	// 	v.pb(mp(a[i],i));
	// sort(v.begin(),v.end());
	// vll v1;
	// for (i=0;i<v.size();i++)
	// 	v1.pb(v[i].F);
	// ll n;cin>>n;
	// for (i=0;i<n;i++)
	// {
	// 	ll x;cin>>x;
	// 	k=lower_bound(v1.begin(),v1.end(),x)-v1.begin();
	// 	cout<<v[k].S<<endl;
	// }
}
