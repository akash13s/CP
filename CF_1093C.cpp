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
#define PII pair <ll,ll>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n,i;cin>>n;
	ll b[n/2];
	for (i=0;i<n/2;i++)
		cin>>b[i];
	ll a[n];a[0]=0,a[n-1]=b[0];
	for (i=1;i<n/2;i++)
	{
		if (b[i]<=a[n-i] and a[i-1]==0)
			a[i]=0,a[n-i-1]=b[i];
		else{
			a[i]=a[i-1],a[n-i-1]=b[i]-a[i];
			while (1)
			{
				if (a[n-i-1]>a[n-i]){
					a[n-i-1]-=a[n-i-1]-a[n-i],a[i]=b[i]-a[n-i-1];
					if (a[i]<a[i-1])
						a[i]+=a[i-1]-a[i],a[n-i-1]=b[i]-a[i];
				}

				else
					break;
			}
		}
	}
	for (i=0;i<n;i++)
		cout<<a[i]<<" ";
}
