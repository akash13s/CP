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
int main()
{
  	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n;cin>>n;
	ll i;vll v[n+1];
	for (i=0;i<2*n;i++)
	{
		ll x;cin>>x;
		v[x].pb(i);
	}
	ll vis1[2*n+2],vis2[2*n+2];
	memset(vis1,0,sizeof(vis1));
	memset(vis2,0,sizeof(vis2));
	ll s1=0,d1=0,s2=0,d2=0;
	s1+=v[1][0],vis1[v[1][0]]=1;
	ll prev=v[1][0];
	for (i=2;i<=n;i++)
	{
		if (abs(v[i][0]-prev)<=abs(v[i][1]-prev))
			s1+=abs(v[i][0]-prev),vis1[v[i][0]]=1,prev=v[i][0];
		else
			s1+=abs(v[i][1]-prev),vis1[v[i][1]]=1,prev=v[i][1];
	}

	d1+=v[1][1],prev=v[1][1],vis1[v[1][1]]=1;
	for (i=2;i<=n;i++)
	{
		if (!vis1[v[i][0]])
			d1+=abs(prev-v[i][0]),prev=v[i][0],vis1[v[i][0]]=1;
		else if (!vis1[v[i][1]])
			d1+=abs(prev-v[i][1]),prev=v[i][1],vis1[v[i][1]]=1;
	}
	ll ans1=d1+s1;

	s2+=v[1][1],vis2[v[1][1]]=1;
	prev=v[1][1];
	for (i=2;i<=n;i++)
	{
		if (abs(v[i][0]-prev)<=abs(v[i][1]-prev))
			s2+=abs(v[i][0]-prev),vis2[v[i][0]]=1,prev=v[i][0];
		else
			s2+=abs(v[i][1]-prev),vis2[v[i][1]]=1,prev=v[i][1];
	}

	d2+=v[1][0],prev=v[1][0],vis2[v[1][0]]=1;
	for (i=2;i<=n;i++)
	{
		if (!vis2[v[i][0]])
			d2+=abs(prev-v[i][0]),prev=v[i][0],vis2[v[i][0]]=1;
		else if (!vis2[v[i][1]])
			d2+=abs(prev-v[i][1]),prev=v[i][1],vis2[v[i][1]]=1;
	}
	ll ans2=s2+d2;cout<<min(ans1,ans2)<<endl;
}