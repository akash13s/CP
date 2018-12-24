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
struct seg_tree
{
	ll open,closed;
};
seg_tree tree[120005];
char s[30001];
void build(ll node,ll start,ll end)
{
	if (start==end)
	{
		if (s[start]=='(')	tree[node].open=1,tree[node].closed=0;
		else tree[node].open=0,tree[node].closed=1;
		return;
	}
	ll mid=(start+end)/2;
	build(2*node,start,mid);
	build(2*node+1,mid+1,end);
	ll matched=min(tree[2*node].open,tree[2*node+1].closed);
	tree[node].open=tree[node*2].open+tree[2*node+1].open-matched;
	tree[node].closed=tree[node*2].closed+tree[2*node+1].closed-matched;
}
void update(ll node,ll start,ll end,ll ind)
{
	if (ind<start or ind>end)
		return ;
	if (start==end)
	{
		if (s[ind]=='(')	s[ind]=')',tree[node].open=0,tree[node].closed=1;
		else	s[ind]='(',tree[node].open=1,tree[node].closed=0;
		return ;
	}
	ll mid=(start+end)/2;
	if (ind<=mid)
		update(2*node,start,mid,ind);
	else
		update(2*node+1,mid+1,end,ind);
	ll matched=min(tree[2*node].open,tree[2*node+1].closed);
	tree[node].open=tree[node*2].open+tree[2*node+1].open-matched;
	tree[node].closed=tree[node*2].closed+tree[2*node+1].closed-matched;

}
ll check()
{
	if (tree[1].closed==0 and tree[1].open==0)
		return 1;
	else
		return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll t=10;
	while (t--)
	{
		cout<<"Test "<<10-t<<":"<<endl;
		ll n;cin>>n;
		tree[4*n];s[n];
		cin>>s;
		ll m;cin>>m;
		build(1,0,n-1);
		while (m--)
		{
			ll k;cin>>k;
			if (k==0)
			{
				ll p=check();
				if (p==1)	cout<<"YES\n";
				else	cout<<"NO\n";
			}
			else
				update(1,0,n-1,k-1);
		}
	}
}
