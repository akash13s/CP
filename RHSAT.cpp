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
ll a[1000003],b[10001];
vll v;
void get(ll n)
{
	while (n>0)
		v.pb(n%10),n/=10;
	reverse(v.begin(),v.end());
}
void f()
{
	ll i,j,k=0,l;
	for (i=0;i<10001;i++)	b[i]=i;
	a[0]=0;
	for (i=1;i<10001;i++)
	{
		get(i);
		l=0;
		for (j=k+1;j<k+1+v.size();j++)
			a[j]=v[l++];
		k+=v.size();
		v.clear();
	}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	f();
    ll q,s=0;cin>>q;
    while (q--)
    {
    	ll n;cin>>n;
    	s+=a[n];
    }
    cout<<s<<endl;
}