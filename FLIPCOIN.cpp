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
ll tree[400005],lazy[400005];
void updateRange(ll node,ll start,ll end,ll l,ll r)
{
	if (lazy[node]!=0)
	{
		if (lazy[node]%2==1)
		{
			tree[node]=end-start+1-tree[node];
			if (start!=end)
				lazy[2*node]+=1,lazy[2*node+1]+=1;
		}
		lazy[node]=0;
	}
	if (start>r or end<l or start>end)
		return;
	if (start>=l and end<=r)
	{
		tree[node]=end-start+1-tree[node];
		if (start!=end)
			lazy[2*node]+=1,lazy[2*node+1]+=1;
		return ;
	}
	ll mid=(start+end)/2;
	updateRange(2*node,start,mid,l,r);
	updateRange(2*node+1,mid+1,end,l,r);
	tree[node]=tree[2*node]+tree[2*node+1];
}
ll query(ll node,ll start,ll end,ll l,ll r)
{
	if (start>r or end<l or start>end)
		return 0;
	if (lazy[node]!=0)
	{
		if (lazy[node]%2==1)
		{
			tree[node]=end-start+1-tree[node];
			if (start!=end)
				lazy[2*node]+=1,lazy[2*node+1]+=1;
		}
		lazy[node]=0;
	}
	if (start>=l and end<=r)
		return tree[node];
	ll mid=(start+end)/2;
	return query(2*node,start,mid,l,r)+query(2*node+1,mid+1,end,l,r);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n,q;cin>>n>>q;
	lazy[4*n];tree[4*n];
	memset(tree,0,sizeof(tree));
	memset(lazy,0,sizeof(lazy));
	while (q--)
	{
		ll op,x,y;
		cin>>op>>x>>y;
		if (op==0)
			updateRange(1,0,n-1,x,y);
		else
			cout<<query(1,0,n-1,x,y)<<endl;
	}
}
