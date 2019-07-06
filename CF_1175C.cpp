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
ll partition(ll arr[], ll l, ll r) 
{ 
    ll x = arr[r], i = l; 
    for (ll j = l; j <= r - 1; j++) 
    { 
        if (arr[j] <= x) 
        { 
            swap(arr[i], arr[j]); 
            i++; 
        } 
    } 
    swap(arr[i], arr[r]); 
    return i; 
} 
ll kthSmallest(ll arr[], ll l, ll r, ll k) 
{ 
    // If k is smaller than number of elements in array 
    if (k > 0 && k <= r - l + 1) 
    { 
        // Partition the array around last element and get 
        // position of pivot element in sorted array 
        ll pos = partition(arr, l, r); 
  
        // If position is same as k 
        if (pos-l == k-1) 
            return arr[pos]; 
        if (pos-l > k-1)  // If position is more, recur for left subarray 
            return kthSmallest(arr, l, pos-1, k); 
  
        // Else recur for right subarray 
        return kthSmallest(arr, pos+1, r, k-pos+l-1); 
    } 
  
    // If k is more than number of elements in array 
    return INT_MAX; 
} 
ll check(ll x,ll a[],ll k,ll n)
{
	ll i,arr[n];
	for (i=0;i<n;i++)	arr[i]=abs(a[i]-x);
	ll m=kthSmallest(arr,0,n-1,k-1);
	// cout<<m<<endl;
	return m;
}
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
		ll n,k;cin>>n>>k;
		ll a[n],i,val;
		for (i=0;i<n;i++)	cin>>a[i];
		ll lb=1,up=1000000000,mid,ans,mval=INT_MAX;
		while (lb<=up)
		{
			mid=(lb+up)/2;
			val=check(mid,a,k+1,n);	
			if (val<=mval)	mval=val,ans=mid,up=mid-1;
			else	lb=mid+1;
		}
		cout<<ans<<endl;
	}
}
