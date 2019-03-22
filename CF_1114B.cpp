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
	ll n,m,k;cin>>n>>m>>k;
	ll a[n],b[n];map<ll,ll> m1;
	ll i;for (i=0;i<n;i++)	cin>>a[i],b[i]=a[i];
	vll v;sort(b,b+n);reverse(b,b+n);
	ll s=0;
	for (i=0;i<m*k;i++)	v.pb(b[i]),m1[b[i]]++,s+=b[i];

	ll c=0;vll v1;
	for (i=0;i<n;i++)
	{
		if (m1[a[i]])
		{
			c++;
			m1[a[i]]--;
			if (c==m)	v1.pb(i),c=0;
		}
	}
	cout<<s<<endl;
	for (i=0;i<v1.size()-1;i++)
		cout<<v1[i]+1<<" ";
}