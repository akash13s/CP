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
	ll a[n],i;
	for (i=0;i<n;i++)	cin>>a[i];
	sort(a,a+n);
	deque <ll> v;
	v.push_front(a[n-1]);
	for (i=n-2;i>=0;i--)
	{
		if (i%2==0)	v.push_back(a[i]);
		else	v.push_front(a[i]);
	}
	while(!v.empty())	cout<<v.front()<<" ",v.pop_front();
}