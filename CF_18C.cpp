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
    ll n,i;cin>>n;
    ll a[n];
    for (i=0;i<n;i++)	cin>>a[i];
    ll pre[n],suf[n];
	pre[0]=a[0];
	suf[n-1]=a[n-1];
	for (i=1;i<n;i++)	pre[i]=pre[i-1]+a[i];
	for (i=n-2;i>=0;i--)	suf[i]=suf[i+1]+a[i];
	ll cnt=0;
	for (i=0;i<n-1;i++)
	{
		if (pre[i]==suf[i+1])	
			cnt++;
	}
	cout<<cnt<<endl;
}