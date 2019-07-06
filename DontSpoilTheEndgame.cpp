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
ll n,m;
ll check(ll x)
{
	ll curr=n,next,c=0,cnt=0;
	while (cnt<1000000)
	{
		curr=curr-x;c++;cnt++;
		if (curr>0 and curr<=1000000000000000000)	
			next=curr+curr/100,curr=next;
		else	break;
	}
	if (cnt<=1000000 and c<=m and curr<=0)	return 1;
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
	cin>>n>>m;
	ll lb=1,up=n,mid,ans;
	
	while (lb<=up)
	{
		mid=(lb+up)/2;
		if (check(mid)){
			// cout<<mid<<endl;
			ans=mid,up=mid-1;
		}
		else	lb=mid+1;
	}
	cout<<ans<<endl;
}
