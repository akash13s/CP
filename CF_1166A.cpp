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
	ll a[26],i;
	memset(a,(ll)0,sizeof(a));
	for (i=0;i<n;i++)
	{
		string s;cin>>s;
		a[s[0]-'a']++;
	}
	ll p,q,x=0;
	for (i=0;i<26;i++)
	{
		p=a[i]/2;q=a[i]-p;
		x+=p*(p-1)/2+q*(q-1)/2;
	}
	cout<<x<<endl;
}
