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
    ll t;cin>>t;
    while (t--)
    {
    	ll a,b,c,l,bb,h;cin>>a>>b>>c;
    	cin>>l>>bb>>h;
    	ll cnt=0;
    	if (a<=l and b<=bb and c<=h)	cnt++;
    	if (b<=l and a<=bb and c<=h)	cnt++;
    	if (b<=l and c<=bb and a<=h)	cnt++;
    	if (c<=l and b<=bb and a<=h)	cnt++;
    	if (a<=l and c<=bb and b<=h)	cnt++;
    	if (c<=l and a<=bb and b<=h)	cnt++;
    	cout<<cnt*4<<endl;
    }
}