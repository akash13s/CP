//AUTHOR: *Akash Shrivastva*
//Birla Institute of Technology,Mesra,India
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define M 500005
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define pll vector< pair <ll,ll> >
#define F first
#define S second
#define PII pair <ll,ll>
ll trie[2][M],sz=0;
ll isSet(ll i,ll x)
{
	if (x&(1<<i))	return 1;
	else	return 0;
}
ll insert1(ll x)	
{
	ll v=0,i,b;
	for (i=30;i>=0;i--)
	{
		b=isSet(i,x);
		if (!trie[b][v])
			trie[b][v]=++sz;
		v=trie[b][v];
	}
}
ll getMin(ll x)	
{
	ll v=0,ans=0,i,b;
	for (i=30;i>=0;i--)
	{
		b=isSet(i,x);
		if (!trie[b][v])	ans=ans | (1<<i), v=trie[!b][v];
		else	v=trie[b][v];
	}
	return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll q;cin>>q;
	ll curr=0;
	memset(trie,0,sizeof(trie));
	insert1(0);
	while (q--)
	{
		ll op;cin>>op;
		if (op==1)
		{
			ll x;cin>>x;
			insert1(x^curr);
		}
		else if (op==2)
		{
			ll x;cin>>x;
			curr^=x;
		}
		else
			cout<<getMin(curr)<<endl;
	}
}