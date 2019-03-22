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
	ll sm[101],lg[101];
	sm[1]=1,lg[1]=1;
	for (i=2;i<=100;i++)
	{
		if (isPrime(i))
			sm[i]=1,lg[i]=i;
		else{
		for (j=2;j*j<=i;j++)
		{
			if (i%j==0)
			{
				sm[i]=j,lg[i]=i/j;
				break;
			}
		}
		}
	}
	ll gm,mi,ma;
	sort(a,a+n);
	gm=a[0];
	for (i=n-1;i>=0;i--)
	{
		if (sm[a[i]]==1 and lg[a[i]]==a[i])
			continue;
		else
		{
			mi=sm[a[i]],ma=lg[a[i]];
			if (gm<ma)	s=min(s,s-a[i]-gm+a[i]/mi+gm*mi);
		}
	}
	cout<<s<<endl;
}