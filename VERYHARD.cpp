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

ll t[2000002][5];
ll a[500005],k;

void build(ll node, ll s, ll e)
{
	if (s==e)
	{
		ll id=a[s]%k;
		t[node][id]+=1;
	}
	else
	{
		ll mid=(s+e)/2;
		build(2*node,s,mid);
		build(2*node+1,mid+1,e);
		ll i;
		for (i=0;i<5;i++)	
			t[node][i]=t[2*node][i]+t[2*node+1][i];
	}
}

void update(ll node, ll s, ll e, ll idx, ll val)
{
	if (s==e)
	{
		ll prevId = a[s]%k;
		t[node][prevId]-=1;
		a[s]+=val;a[s]%=k;
		ll newId = a[s];
		t[node][newId]+=1;
	}
	else
	{
		ll mid=(s+e)/2;
		if (idx>=s and idx<=mid)	update(node*2,s,mid,idx,val);
		else	update(2*node+1,mid+1,e,idx,val);
		ll i;
		for (i=0;i<5;i++)	
			t[node][i]=t[2*node][i]+t[2*node+1][i];
	}
}

ll query(ll node, ll s, ll e, ll l, ll r, ll rem)
{
	if (r<s or l>e)	return 0;
	else if (s>=l and e<=r)	return t[node][rem];
	else
	{
		ll mid=(s+e)/2;
		return query(2*node,s,mid,l,r,rem)+query(2*node+1,mid+1,e,l,r,rem);
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
	ll n,q;cin>>n>>q>>k;
	a[n+1];t[4*n+1][5];
	ll i;
	for (i=1;i<=n;i++)	cin>>a[i],a[i]%=k;
	memset(t,0,sizeof(t));
	build(1,1,n);
	while (q--)
	{
		ll op;cin>>op;
		if (op==1)
		{
			ll p,val;cin>>p>>val;
			update(1,1,n,p,val);
		}
		else
		{
			ll l,r,rem;cin>>l>>r>>rem;
			cout<<query(1,1,n,l,r,rem)<<endl;
		}
	}
}