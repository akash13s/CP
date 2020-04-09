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

	Node() {
		a[0]=a[1]=NULL;
	}
};
ll isSet(ll i, ll x)
{
	if ( x & (1<<i))	return 1;
	else	return 0;
}
void insert1(ll x, Node *head)
{
	Node *curr=head;
	ll i,b;
	for (i=17;i>=0;i--)
	{
		b=isSet(i,x);
		if (!curr->a[b])	curr->a[b]=new Node();
		curr=curr->a[b];
	}
}
ll search1(ll x, Node *head)
{
	Node *curr=head;
	ll i,b,ans=0;
	for (i=17;i>=0;i--)
	{
		b=isSet(i,x);
		if (curr->a[!b])	ans|=(1<<i), curr=curr->a[!b];
		else curr = curr->a[b];
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
	ll n;cin>>n;
	ll i,j,arr[n+1], pre[n+1];
	pre[0]=0;
	for (i=1;i<=n;i++)	cin>>arr[i], pre[i]=pre[i-1]+arr[i];
 	ll ans=INT_MIN;
 	Node *head = new Node();
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
		{
			insert1(pre[i]-pre[j-1], head);
		}
		for (j=i+1;j<=n;j++)
		{
			ans=max(ans, search1(pre[j]-pre[i], head));
		}
	}
	cout<<ans<<endl;
}