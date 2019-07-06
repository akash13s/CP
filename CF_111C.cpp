#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mp make_pair
#define mod 1000000007
#define ff first
#define ss second
ll n,k,a,b;
ll arr[100010];

ll rec(ll l,ll r)
{
    ll pos1=lower_bound(arr,arr+k,l)-arr;
    ll pos2=upper_bound(arr,arr+k,r)-arr;
    if(pos1==pos2)
    return a;
    if(l==r)
    return b*1*(pos2-pos1);
    ll mid=(l+r)/2;
    return min(b*(r-l+1)*(pos2-pos1),rec(l,mid)+rec(mid+1,r));
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll i;
    cin>>n>>k>>a>>b;
    for(i=0;i<k;i++)
    cin>>arr[i];
    sort(arr,arr+k);
    cout<<rec(1,(1<<n));
	return 0;
}