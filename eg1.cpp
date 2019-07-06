#include<bits/stdc++.h>
using namespace std;

int check(int x,int n)
{
    if (x*x+x>=n) return 1;
    else  return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while (t--)
    {
          int n;cin>>n;
          int mid,lb=1,up=n,ans;
          n=2*n;
          while (lb<=up)
          {
              mid=(lb+up)/2;
              if (check(mid,n)) ans=mid,up=mid-1;
              else  lb=mid+1;
          }
          cout<<ans<<endl;
    }
}
