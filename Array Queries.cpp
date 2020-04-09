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
ll n,k,added[460],a[460][1000],arr[200003],rt;
ll query(ll l,ll r)
{
	ll cnt=0,bno=l/rt,m;
	while (l/rt==bno and l<=r)
	{
		if ((arr[l]+added[l/rt]%k)%k==0)	cnt++;
		l++;	
	}
	while (l+rt<=r)
	{
		m=(k-added[l/rt]%k)%k;
		cnt+=a[l/rt][m];
		l+=rt;
	}
	while (l<=r)
	{
		if ((arr[l]+added[l/rt]%k)%k==0)	cnt++;
		l++;
	}
	return cnt;
}
void update(ll l,ll r,ll y)
{
	ll bno=l/rt,m=y%k,temp;
	while (l<=r and l/rt==bno)
	{
		temp=arr[l];
		arr[l]+=m;arr[l]%=k;
		a[l/rt][temp]--;
		a[l/rt][arr[l]]++;
		l++;
	}
	while (l+rt<=r)
	{
		added[l/rt]+=m;
		added[l/rt]%=k;
		l+=rt;
	}
	while (l<=r)
	{
		temp=arr[l];
		arr[l]+=m;arr[l]%=k;
		a[l/rt][temp]--;
		a[l/rt][arr[l]]++;
		l++;
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
	ll q;
    cin>>n>>q>>k;
    arr[n];ll i,j;
    memset(a,0,sizeof(a));
    memset(added,0,sizeof(added));
    for (i=0;i<n;i++)	cin>>arr[i],arr[i]%=k;
    rt=ceil(sqrt(n));
    for (i=0;i<n;i++)
    {
    	a[i/rt][arr[i]]++;
    }
    while (q--)
    {
    	ll t,l,r;cin>>t>>l>>r;
    	if (t==1)
    	{
    		cout<<query(l,r)<<endl;
    	}
    	else
    	{
    		ll y;cin>>y;
    		update(l,r,y);
    	}
    }
}