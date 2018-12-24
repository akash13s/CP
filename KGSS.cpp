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
#define PII pair <ll,ll>
struct seg_tree{
	ll max1,max2;
};
seg_tree tree[4*100005],nl;
ll n,a[100005];
void build(ll node,ll start,ll end)
{
	if (start==end)
		tree[node].max1=a[start],tree[node].max2=-1;
	else{
		ll mid=(start+end)/2;
		build(2*node,start,mid);  
		build(2*node+1,mid+1,end);
		tree[node].max1=max(tree[2*node].max1,tree[node*2+1].max1);
		tree[node].max2=max(min(tree[2*node].max1,tree[node*2+1].max1),max(tree[2*node].max2,tree[node*2+1].max2));
	}
}
void update(ll node,ll start,ll end,ll ind,ll val)
{
	if (start==end)
	{
		a[ind]=val;
		tree[node].max1=val;
		return ;
	}
	else{
	ll mid=(start+end)/2;
	if (ind>=start and ind<=mid)
		update(2*node,start,mid,ind,val);
	else
		update(2*node+1,mid+1,end,ind,val);
	tree[node].max1=max(tree[2*node].max1,tree[node*2+1].max1);
	tree[node].max2=max(min(tree[2*node].max1,tree[node*2+1].max1),max(tree[2*node].max2,tree[node*2+1].max2));
	}
}
seg_tree query(ll node,ll start,ll end,ll l,ll r)
{
	if (r<start or l>end)
		return nl;
	else if (start>=l and end<=r)
		return tree[node];
	else
	{
		ll mid=(start+end)/2;
		seg_tree left,right,root;
		left=query(2*node,start,mid,l,r);
		right=query(2*node+1,mid+1,end,l,r);
		root.max1=max(left.max1,right.max1);
		root.max2=max(min(left.max1,right.max1),max(left.max2,right.max2));
		return root;
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
	cin>>n;
	a[n];tree[4*n+1];
	ll i;
	for (i=0;i<n;i++)
		cin>>a[i];
	nl.max1=-1,nl.max2=-1;
	build(1,0,n-1);
	ll q;cin>>q;
	while (q--)
	{
		char ch;ll x,y;
		cin>>ch>>x>>y;
		if (ch=='U')
			update(1,0,n-1,x-1,y);
		else{
			seg_tree p=query(1,0,n-1,x-1,y-1);
			cout<<p.max1+p.max2<<endl;
		}
	}
}
