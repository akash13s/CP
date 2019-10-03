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
    ll x,y,m;
    cin>>x>>y>>m;
    if (x>y)	swap(x,y);
    if (y>=m)
    {
    	cout<<0<<endl;
    	return 0;
    }
    if (y<=0)
    {
    	cout<<-1<<endl;
    	return 0;
    }
    ll ans=0;
    ans+=(-x)/y;
    x+=ans*y;
    if (x>y)	swap(x,y);
    while (y<m)
    {
    	x+=y;
    	ans++;
    	if (x>y)	swap(x,y);
    }
    cout<<ans<<endl;
}