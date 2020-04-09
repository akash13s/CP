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
    ll t,h;cin>>t;
    for (h=1;h<=t;h++)
    {
    	ll n,k;cin>>n>>k;
    	ll a[n+1],i;
    	for (i=1;i<=n;i++)	cin>>a[i];
    	sort(a+1,a+n+1);
    	ll pre[n+1];
    	pre[0]=0;
    	for (i=1;i<=n;i++)	pre[i]=a[i]+pre[i-1];
    	ll ans=INT_MAX;
    	for (i=k;i<=n;i++)
    		ans=min(ans,a[i]*(k-1)-(pre[i-1]-pre[i-k]));
    	cout<<"Case #"<<h<<":"<<" "<<ans<<endl;
    }
}