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
    ll n,m,k;cin>>n>>m>>k;
    ll lb=1,up=n*m,mid,i,sm;
    while (lb<up)
    {
        sm=0;
        mid=(lb+up)>>1;
        for (i=1;i<=n;i++)
            sm+=min(mid/i,m);
        if (sm>=k)  up=mid;
        else    lb=mid+1;
    }
    cout<<lb<<endl;
}