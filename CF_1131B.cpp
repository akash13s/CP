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
	ll a[n+1],b[n+1],c=0;
	a[0]=b[0]=0;
	ll mi,ma,i;
	for (i=1;i<=n;i++)
		cin>>a[i]>>b[i];
	for (i=1;i<=n;i++)
	{
		mi=min(a[i],b[i]);
		ma=max(a[i],b[i]);

		if (!(a[i]==a[i-1] and b[i]==b[i-1]) and mi>=max(a[i-1],b[i-1])){
			c+=mi-max(a[i-1],b[i-1]);
			if (a[i-1]==0 and b[i-1]==0)
				c++;
			else if (a[i-1]!=b[i-1])	c++;
		}
	}
	if (a[n]==0 and b[n]==0) c++;
	cout<<c<<endl;
}