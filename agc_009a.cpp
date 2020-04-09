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
	ll i,a[n],b[n],s=0,k;
	for (i=0;i<n;i++)	cin>>a[i],cin>>b[i];
	k=a[n-1]%b[n-1];
	if (k!=0) k=a[n-1]/b[n-1]+1, s+=k*b[n-1]-a[n-1];
	for (i=n-2;i>=0;i--)
	{
		a[i]+=s;
		if (a[i]%b[i]==0)	continue;
		else
		{
			k=a[i]/b[i]+1;
			s+=k*b[i]-a[i];
		}
	}
	cout<<s<<endl;	
}