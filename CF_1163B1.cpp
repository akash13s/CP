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
ll n,a[100005];
ll check(int x)
{
	map<ll,ll> m,m1;
	ll i;
	for (i=0;i<=x;i++)
		m[a[i]]++;
	for (auto itr=m.begin();itr!=m.end();itr++)
		m1[itr->second]++;
	if (m1.size()>2)	return 0;
	else if (m1.size()==1)
	{
		if (m1.begin()->first==1)	return 1;
		else	return 0;
	}
	else
	{
		ll k1,k2,f1,f2;
		auto itr=m1.begin();
		k1=itr->first;f1=itr->second;
		itr++;
		k2=itr->first;f2=itr->second;
		// cout<<k1<<" "<<f1<<endl;
		if ((k2-k1==1 and f2==1) or (k1==1 and f1==1))	return 1;
		else	return 0;
	}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	cin>>n;
	a[n];ll i,ans;
	for (i=0;i<n;i++)	cin>>a[i];
	for (i=n-1;i>=0;i--)
	{
		if (check(i))	{
			ans=i;
			break;
		}
	}
	cout<<ans+1<<endl;
}
