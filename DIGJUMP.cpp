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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	string s;cin>>s;
	vll v[10];queue<ll> q;ll i,vis[100005],level[100005];
	ll n=s.length();
	memset(vis,0,sizeof(vis));memset(level,0,sizeof(level));
	for (i=1;i<n;i++)
		v[s[i]-'0'].pb(i);
	q.push(0);vis[0]=1;level[0]=0;
	while (!q.empty())
	{
		ll idx=q.front();
		if (idx==n-1)	break;
		ll val=s[idx]-'0';
		for (i=0;i<v[val].size();i++)
		{
			if (!vis[v[val][i]])
				vis[v[val][i]]=1,q.push(v[val][i]),level[v[val][i]]=level[idx]+1;
		}
		v[val].clear();
		if (idx-1>=0 and !vis[idx-1])
			vis[idx-1]=1,q.push(idx-1),level[idx-1]=level[idx]+1;
		if (idx+1<n and !vis[idx+1])
			vis[idx+1]=1,q.push(idx+1),level[idx+1]=level[idx]+1;
		q.pop();
	}
	cout<<level[n-1]<<endl;
}
