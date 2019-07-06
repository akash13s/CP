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

    ll n,m;cin>>n>>m;
    ll a[n],b[m],i,o=0,e=0,c=0;
    for (i=0;i<n;i++)	cin>>a[i];
    for (i=0;i<m;i++)	cin>>b[i];
    
   	for (i=0;i<m;i++)
   	{
   		if (b[i]%2==0)	
   			e++;
   		else	o++;
   	}

   	for (i=0;i<n;i++)
   	{
   		if (a[i]%2==0)
   		{
   			if (o)	o--,c++;
   		}
   		else
   		{
   			if (e)	e--,c++;
   		}
   	}

    cout<<c<<endl;
}
