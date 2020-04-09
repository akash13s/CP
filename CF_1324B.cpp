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
      ll n;cin>>n;
      ll a[n],i,j;
      for (i=0;i<n;i++) cin>>a[i];
      ll  cl; 
      ll L[n][n];  
      
       for (i = 0; i < n; i++) 
          L[i][i] = 1; 
      
        for (cl=2; cl<=n; cl++) 
        { 
            for (i=0; i<n-cl+1; i++) 
            { 
                j = i+cl-1; 
                if (a[i] == a[j] && cl == 2) 
                   L[i][j] = 2; 
                else if (a[i] == a[j]) 
                   L[i][j] = L[i+1][j-1] + 2; 
                else
                   L[i][j] = max(L[i][j-1], L[i+1][j]); 
            } 
        }
        if (L[0][n-1]>=3) cout<<"YES\n";
        else  cout<<"NO\n";
      
      }
}