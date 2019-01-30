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
	ll w,h,w1,h1,w2,h2;
	cin>>w>>h;
	cin>>w1>>h1;
	cin>>w2>>h2;
	ll i;
	for (i=h;i>=0;i--)
	{
		w+=i;
		if (i==h1)	{
			if (w-w1>=0)
				w-=w1;
			else	w=0;
		}
		if (i==h2)	{
			if (w-w2>=0)
				w-=w2;
			else	w=0;
		}
	}
	cout<<w<<endl;
}
