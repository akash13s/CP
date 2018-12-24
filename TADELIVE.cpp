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
struct Interval
{
  int f,s;
};
bool compare(Interval i1,Interval i2)
{
  return (abs(i1.f-i1.s)>abs(i2.f-i2.s));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    ll n,x,y,i;
    cin>>n>>x>>y;
    ll a[n],b[n];
    for (i=0;i<n;i++) cin>>a[i];
    for (i=0;i<n;i++) cin>>b[i];

    Interval arr[n];
    for (i=0;i<n;i++)
      arr[i].f=a[i],arr[i].s=b[i];
    sort(arr,arr+n,compare);
    ll ans=0;
    for (i=0;i<n;i++)
    {
      if (arr[i].f>=arr[i].s)
      {
        if (x>0)  ans+=arr[i].f,x--;
        else  ans+=arr[i].s,y--;
      }
      else
      {
        if (y>0)  ans+=arr[i].s,y--;
        else  ans+=arr[i].f,x--;
      }
    }
    cout<<ans<<endl;
}
