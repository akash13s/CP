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
	ll q;cin>>q;
	ll l=0,r=0;ll pos[200005],c=0;
	while (q--)
	{
		ll x;char ch;
		cin>>ch>>x;
		if (ch=='L')
		{
			pos[x]=l;l--;
			if (c==0)	r++,c=1;
		}
		else if (ch=='R')
		{
			pos[x]=r;r++;
			if (c==0)	l--,c=1;
		}
		else
		{
			cout<<min(abs(pos[x]-l)-1,abs(pos[x]-r)-1)<<endl;
		}
	}
}
