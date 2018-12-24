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
struct seg_tree{
	ll sum,maxSum,pre,suf;
};
seg_tree tree[150005],d;
ll a[50001],n;
void build(ll node,ll start,ll end)
{
	if (start==end)
		tree[node].sum=tree[node].pre=tree[node].suf=tree[node].maxSum=a[start];
	else{
	ll mid=(start+end)/2;
	build(2*node,start,mid);
	build(2*node+1,mid+1,end);
	tree[node].sum=tree[2*node].sum+tree[2*node+1].sum;
	tree[node].pre=max(tree[node*2].sum+tree[2*node+1].pre,tree[2*node].pre);
	tree[node].suf=max(tree[2*node+1].sum+tree[2*node].suf,tree[2*node+1].suf);
	tree[node].maxSum=max(tree[node*2].maxSum,max(tree[node*2+1].maxSum,tree[node*2].suf+tree[2*node+1].pre));
	}

}
seg_tree query(ll node,ll start,ll end,ll l,ll r)
{
	if (r<start or l>end)
		return d;
	if (start>=l and end<=r)
		return tree[node];
	ll mid=(start+end)/2;
	seg_tree left=query(2*node,start,mid,l,r);
	seg_tree right=query(2*node+1,mid+1,end,l,r);
	seg_tree root;
	root.pre=max(left.sum+right.pre,left.pre);
	root.suf=max(right.sum+left.suf,right.suf);
	root.maxSum=max(left.maxSum,max(right.maxSum,left.suf+right.pre));
	return root;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	ll i;cin>>n;
	a[n];tree[4*n];
	for (i=0;i<n;i++)
		cin>>a[i];
	d.sum=d.maxSum=d.pre=d.suf=INT_MIN;
	build(1,0,n-1);	
	// for (i=0;i<2*n;i++)
	// 	cout<<tree[i].maxSum<<" ";
	ll m;cin>>m;
	while (m--)
	{
		ll x,y;
		cin>>x>>y;
		seg_tree ans=query(1,0,n-1,x-1,y-1);
		cout<<ans.maxSum<<endl;
	}
}
