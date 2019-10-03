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
    ll n;cin>>n;
    ll a[n*n],i;
    unordered_map<ll,ll> m;
    for (i=0;i<n*n;i++)
    {
    	cin>>a[i];
    	m[a[i]]++;
    }
    ll k=0;
    for (auto itr=m.begin();itr!=m.end();itr++){
    	if ((itr->second)%2==1)
    		cout<<itr->first<<" ",k++;
    }
    
    for (i=0;i<n-k;i++)	cout<<1<<" ";
   
}