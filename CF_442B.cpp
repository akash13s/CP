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
	ll n,i,j;cin>>n;
	double a[n],cnt=0;
	for (i=0;i<n;i++)	{cin>>a[i];if (a[i]==1.0)	cnt++;}
	double ans=INT_MIN,p=1.0,s=0.0;
	if (cnt)	cout<<1.00000000000<<endl;
	else{
	sort(a,a+n);reverse(a,a+n);
	for (i=0;i<n;i++)
	{
		s+=a[i]/(1-a[i]);
		p*=(1-a[i]);
		ans=max(ans,s*p);
		if (s>1)	break;
	}
	printf("%0.12lf\n",ans);
	}
}