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
    ll a[n],pre[n+1],i;
    for (i=0;i<n;i++)	cin>>a[i];
    ll q;cin>>q;
	sort(a,a+n);
	pre[0]=0;
	for (i=1;i<=n;i++)
	{
		pre[i]=pre[i-1]+a[i-1];
	}
	while (q--)
	{
		ll k;cin>>k;
		ll p=n/(k+1);
		if (n%(k+1)!=0)	p++;
		cout<<pre[p]<<endl;	
	}
}