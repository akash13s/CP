#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll n,m,a[1000001];
ll fun(ll x)
{
    ll s=0,i;
    for (i=0;i<n;i++)
    {
        if (a[i]>x)
            s+=a[i]-x;
    }
    return s;
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
    a[n];
    ll i;
    for (i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    ll lb=0;ll up=a[n-1];ll mid,ans;
    while (lb<=up)
    {
        mid=(lb+up)/2;
        if (fun(mid)>=m)
        {
            ans=mid;
            lb=mid+1;
        }
        else
            up=mid-1;
    }
    cout<<ans<<endl;
}

