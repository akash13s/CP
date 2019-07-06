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
	ll a[n],i,o=0,e=0;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
		if (a[i]%2==0)	e++;
		else	o++;
	}
	if ((o and !e) or (e and !o))
	{
		for (i=0;i<n;i++)	cout<<a[i]<<" ";
	}
	else{
		sort(a,a+n);
		for (i=0;i<n;i++)	cout<<a[i]<<" ";
	}
}
