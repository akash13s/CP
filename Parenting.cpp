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
ll check(vector < pair< ll, pair<ll,ll> > > v)
{
	ll n=v.size(),i,j,c=0,fi;
	for (i=0;i<=1440;i++)
	{
		fi=0;
		for (j=0;j<n;j++)
		{
			if (i>=v[j].F and i<v[j].S.F){
				fi++;
				if (fi>2)
				{
					c++;
					break;
				}
			}
		}
		if (c) break;
	}
	if (c)	return 0;
	else	return 1;
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
		ll n,i;cin>>n;
		vector < pair< ll, pair<ll,ll> > > v;
		for (i=0;i<n;i++)
		{
			ll s,e;cin>>s>>e;
			v.pb(make_pair(s, make_pair(e,i)));
		}
		sort(v.begin(),v.end());
		ll ec=-1,ej=-1;
		string ans;char ch[n];
		if (!check(v))	ans="IMPOSSIBLE";
		else
		{
			for (i=0;i<n;i++)
			{
				if (v[i].F>=ec)
					ec=v[i].S.F, ch[v[i].S.S]='C';
				else if (v[i].F>=ej)
					ej=v[i].S.F, ch[v[i].S.S]='J';
			}
			for (i=0;i<n;i++)	ans.push_back(ch[i]);
		}
		cout<<"Case #"<<h<<": "<<ans<<endl;
	}
}