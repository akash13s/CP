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
ll check(ll n)
{
	ll cnt=0;
	set<ll> s;
	while (n>0)
	{
		cnt++;
		s.insert(n%10);
		n/=10;
	}
	if (cnt==s.size())	return 1;
	else	return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    ll l,r;cin>>l>>r;
    ll c=0,i;
    for (i=l;i<=r;i++)
    {
    	if (check(i))
    	{
    		cout<<i<<endl;
    		c++;
    		break;
    	}
    }
    if (c==0)	cout<<-1<<endl;
}