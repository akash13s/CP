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
ll n,k,a[1000001];
ll check(ll x)
{
	ll s=0,i;
	for (i=0;i<n;i++)
		s+=a[i]/x;
	if (s>=k)	return 1;
	else return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    cin>>n>>k;
    a[n];
    ll i;for (i=0;i<n;i++)	cin>>a[i];
    ll lb=1,up=*max_element(a,a+n),mid,ans,c=0;
    while (lb<=up)
    {
    	mid=(lb+up)/2;
    	// cout<<mid<<endl;
    	if (check(mid))	ans=mid,lb=mid+1,c++;
    	else	up=mid-1;
    }
    if (c)
    	cout<<ans<<endl;
    else	cout<<-1<<endl;
}
