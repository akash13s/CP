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
    ll i,j,a[n];
    for (i=0;i<n;i++)	cin>>a[i];
    vll v[100001];
    for (i=2;i<=100000;i++)
    {
    	for (j=i;j<=100000;j+=i)
    		v[j].pb(i);
    }
    ll cnt,f[100001];
    memset(f,0,sizeof(f));
    ll ans=1;

    for (i=0;i<n;i++)
    {
    	cnt=0;
    	for (j=0;j<v[a[i]].size();j++)
    		cnt=max(f[v[a[i]][j]],cnt);
    	cnt++;
    	for (j=0;j<v[a[i]].size();j++)
    		f[v[a[i]][j]]=cnt;
    	ans=max(ans,cnt);
    }
    cout<<ans<<endl;
}