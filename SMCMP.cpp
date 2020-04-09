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
ll id[100005];
vll adj[100005];
void init()
{
	ll i;
	for (i=0;i<100003;i++)	id[i]=i;
}
ll root(ll x)
{
	while (x!=id[x]){
		id[x]=id[id[x]];
		x=id[x];
	}
	return x;
}
void union1(ll x,ll y)
{
	ll p=root(x);
	ll q=root(y);
	id[p]=id[q];
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
	init();
	while (q--)
	{
		ll op,x,y;cin>>op>>x>>y;
		if (op==1)	{
			union1(x,y);
		}
		else
		{
			if (root(x)==root(y))	cout<<"Yes\n";
			else	cout<<"No\n";
		}
	}
}