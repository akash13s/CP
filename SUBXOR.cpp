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

struct Node {
	Node *a[2];
	ll wt;

	Node() {
		wt=0;
		a[0]=a[1]=NULL;
	}
};
ll isSet(ll i,ll x)
{
	if (x & (1<<i)) return 1;
	else	return 0;
}
void insert1(ll x, Node *head)
{
	Node *curr=head;
	ll i,b;
	for (i=17;i>=0;i--)
	{
		b=isSet(i,x);
		if (!curr->a[b]) curr->a[b]=new Node();
		curr->a[b]->wt+=1;
		curr=curr->a[b];
	}
}
ll count1(ll nex, ll k, Node *head)
{
	Node *curr=head;
	ll c=0,i,nb,kb;
	for (i=17;i>=0;i--)
	{
		nb=isSet(i,nex);
		kb=isSet(i,k);
		if (nb==0 and kb==0) 
		{
			if (curr->a[0]) curr=curr->a[0];
			else break;
		}
		else if (nb==1 and kb==0)
		{
			if (curr->a[1])	curr=curr->a[1];
			else	break;
		}
		else if (nb==0 and kb==1)
		{
			if (curr->a[0])	c+=curr->a[0]->wt;
			if (curr->a[1])	curr=curr->a[1];
			else break;
		}
		else 
		{
			if (curr->a[1]) c+=curr->a[1]->wt;
			if (curr->a[0])	curr=curr->a[0];
			else	break;
		}
	}
	return c;
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
		ll n,k,i,curr=0;cin>>n>>k;
		Node *head=new Node();
		ll ans=0;
		insert1(0,head);
		for (i=0;i<n;i++)
		{
			ll x;cin>>x;
			curr^=x;
			ans+= count1(curr,k,head);
			insert1(curr,head);
		}
		cout<<ans<<endl;
	}
}