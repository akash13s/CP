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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n;cin>>n;
	ll a[n],i;for (i=0;i<n;i++)	cin>>a[i];
	ll b[n];vll v;
	if (a[0]==2) b[0]=1;
	else	b[0]=-1;
	for (i=1;i<n;i++)
	{
		if (a[i]==2 and a[i-1]==2)
			b[i]=b[i-1]+1;
		else if (a[i]==1 and a[i-1]==1)
			b[i]=b[i-1]-1;
		else if (a[i]==1 and a[i-1]==2)
			b[i]=-1;
		else	b[i]=1;
	}	
	i=n-1;
	while (i>=0)
	{
		v.pb(abs(b[i]));
		i-=abs(b[i]);
	}
	reverse(v.begin(),v.end());

	ll ans=INT_MIN,k;
	for (i=0;i<v.size()-1;i++)
	{
		k=min(v[i],v[i+1])*2;
		ans=max(ans,k);
	}
	cout<<ans<<endl;
}