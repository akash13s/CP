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
bitset<5001>tree1[400005],tree2[400005];
ll a[100005],b[100005];
void build(ll node,ll start,ll end)
{
	if (start==end)
	{
		tree1[node].set(a[start]);
		tree2[node].set(b[start]);
		return ;
	}
	if (start>end)
		return;
	ll mid=(start+end)/2;
	build(2*node,start,mid);
	build(2*node+1,mid+1,end);
	tree1[node]=tree1[2*node]|tree1[2*node+1];
	tree2[node]=tree2[2*node]|tree2[2*node+1];
}
bitset<5001> query1(ll node,ll start,ll end,ll l,ll r)
{
	if (r<start or l>end or start>end)
		return 0;
	if (start>=l and end<=r)
		return tree1[node];
	ll mid=(start+end)/2;
	return query1(2*node,start,mid,l,r)|query1(2*node+1,mid+1,end,l,r);
}
bitset<5001> query2(ll node,ll start,ll end,ll l,ll r)
{
	if (r<start or l>end or start>end)
		return 0;
	if (start>=l and end<=r)
		return tree2[node];
	ll mid=(start+end)/2;
	return query2(2*node,start,mid,l,r)|query2(2*node+1,mid+1,end,l,r);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n,i;
	cin>>n;a[n];b[n];
	for (i=0;i<n;i++)
		cin>>a[i];
	for (i=0;i<n;i++)
		cin>>b[i];
	build(1,0,n-1);
	ll q;
	cin>>q;
	while (q--)
	{
		ll A,B,C,D;
		cin>>A>>B>>C>>D;
		bitset<5001> ans=(query1(1,0,n-1,A-1,B-1)|query2(1,0,n-1,C-1,D-1));
		cout<<ans.count()<<endl;
	}
}
