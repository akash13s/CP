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
	
	ll n,k;cin>>n>>k;
	ll a[n],i;
	map <ll,ll> cnt;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
		cnt[a[i]]++;
	}
	sort(a,a+n);
	ll s=0,e;
	s=a[0];
	cout<<a[0]<<endl;
	k--;
	ll ind=0;ind+=cnt[a[0]];
	for (i=ind;i<n;i++)
	{
		if (k==0)	break;
		else
		{
			e=a[i]-s;
			if (e<0)
			{
				break;
			}
			cout<<e<<endl;
			k--;
			s+=e;
			i+=cnt[a[i]]-1;
		}
	}
	for (i=1;i<=k;i++)
		cout<<0<<endl;
}
