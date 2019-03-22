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
		 ll n,b,i,j,p,c,tr,k;
		 cin>>n>>b;
		 tr=n;
         j=b;
          for (i=2;i*i<=b;i++)
          {
              if (j%i==0)
              {   
                 p=0;
                 while (j%i==0)
                 {
                       p++;
                       j/=i;
                 }
                 c=0;
                 k=n;
                 while (k/i>0)
                 {
                       c+=k/i;
                       k/=i;
                 }
                 tr=min(tr,c/p);
                 
              }
          }
          if (b)
          {
          	     p=0;
                 while (b%i==0)
                 {
                       p++;
                       j/=i;
                 }
                 c=0;
                 k=n;
                 while (k/i>0)
                 {
                       c+=k/i;
                       k/=i;
                 }
                 tr=min(tr,c/p);
          }
          cout<<tr<<endl;
  }
