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
    ll t;cin>>t;
    while (t--)
    {
    	ll m,n;cin>>m>>n;
    	ll a[n],i,s=0;for (i=0;i<n;i++)	cin>>a[i],s+=a[i];
    	ll k=s/m;
    	if (s%m!=0)	k++;
    	ll sum=0,ans;
    	for (i=0;i<n;i++)
    	{
    		if (a[i]%k==0)	sum+=a[i]/k;
    		else	sum+=a[i]/k+1;
    	}
    	if (sum<=m)	ans=k;
    	else if (sum>m)	ans=k+1;
    	cout<<ans<<endl;
    }
}
