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
	Node *a[26];
	ll wt;

	Node() {
		wt=0;
		for (ll i=0;i<26;i++)	a[i]=NULL;
	}
};

void insert1(string s, Node *head)
{
	Node *curr=head;
	ll i,len=s.length(),idx;
	for (i=0;i<len;i++)
	{
		idx=s[i]-'A';
		if (!curr->a[idx])	curr->a[idx]=new Node();
		curr->a[idx]->wt+=1;
		curr=curr->a[idx];
	}
}
ll dfs(Node *curr, ll k)
{
	ll i,ans=0; 
	for (i=0;i<26;i++)
	{
		if (curr->a[i]){
			ans+=(curr->a[i]->wt)/k + dfs(curr->a[i],k);
		}
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
	ll t;cin>>t;
	ll h;
	for (h=1;h<=t;h++)
	{
		ll n,k;cin>>n>>k;
		ll i,ans;
		Node *head = new Node();
		for (i=0;i<n;i++) {
			string s;
			cin>>s;
			insert1(s,head);
		}
		ans = dfs(head,k);
		cout<<"Case #"<<h<<": "<<ans<<endl;
	}
}