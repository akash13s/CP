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
	ll q[n-1],a[n],i,c=0;
	for (i=0;i<n-1;i++)	cin>>q[i];
	a[0]=1;
	for (i=1;i<n;i++)
		a[i]=a[i-1]+q[i-1];
	for (i=0;i<n;i++)
	{
		if (a[i]<=0)	c++;
	}
	ll flag=0;ll cnt[n+1];memset(cnt,0,sizeof(cnt));
	if (c)
	{
		ll k=*min_element(a,a+n);
		for (i=0;i<n;i++)
			a[i]+=-k+1;
	}
	for (i=0;i<n;i++)	cnt[a[i]]++;
	for (i=0;i<n;i++)
		{
			if (!(a[i]>=1 and a[i]<=n) or cnt[a[i]]>1)
				flag++;
		}
	

	if (flag)	cout<<-1<<endl;
	else{
	for (i=0;i<n;i++)
		cout<<a[i]<<" ";
	}
}