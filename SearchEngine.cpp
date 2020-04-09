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

struct trieNode {
	trieNode *a[26];
	ll wt;

	trieNode() {
		wt=0;
		for (ll i=0;i<26;i++)	a[i]=NULL;
	}
};
void insert1(string s, trieNode *head, ll p)
{
	ll i,idx;
	trieNode *curr = head;
	for (i=0;i<s.length();i++)
	{
		idx=s[i]-'a';
		if (!curr->a[idx])	curr->a[idx]=new trieNode();
		curr->a[idx]->wt=max(curr->a[idx]->wt,p);
		curr = curr->a[idx];
	}
}
ll bestSearch(string s, trieNode *head)
{
	ll i,idx,maxWeight=0;
	trieNode *curr=head;
	for (i=0;i<s.length();i++)
	{
		idx=s[i]-'a';
		if (!curr->a[idx])	return -1;
		maxWeight=curr->a[idx]->wt;
		curr=curr->a[idx];
	}
	return maxWeight;
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
	trieNode *head = new trieNode();
	ll i;
	for (i=0;i<n;i++)
	{
		string s;ll w;
		cin>>s>>w;
		insert1(s,head,w);
	}
	while (q--)
	{
		string s;cin>>s;
		cout<<bestSearch(s,head)<<endl;
	}
}