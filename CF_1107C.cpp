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
	ll n,k;cin>>n>>k;
	ll a[n],i,j,s1=0;
	for (i=0;i<n;i++)	cin>>a[i],s1+=a[i];
	string s;cin>>s;
	vll v;
	for (i=0;i<n-1;i++)
	{
		if (s[i]!=s[i+1])	continue;
		else
		{
			v.clear();
			v.pb(a[i]);v.pb(a[i+1]);
			for (j=i+1;j<n-1;j++)
			{
				if (s[j]==s[j+1])	i=j,v.pb(a[j+1]);
				else
				{
					
					break;
				}
			}
			if (v.size()<=k)	continue;
			else
			{
				sort(v.begin(),v.end());
				for (j=0;j<v.size()-k;j++)
					s1-=v[j];
				// for (j=0;j<v.size();j++)	cout<<v[j]<<" ";

			}
		}
	}
	cout<<s1<<endl;
}