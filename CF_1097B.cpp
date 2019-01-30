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
ll n,a[100];
bool f(ll i,ll sum)
{
	// cout<<i<<endl;
	if (sum==0 and i>=0)	return true;
	if (i==0 and sum!=0)	return false;
	if (a[i]>sum)	return f(i-1,sum);
	else	return f(i-1,sum)||f(i-1,sum-a[i]);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    cin>>n;
    a[n];ll i,c=0;
    for (i=0;i<n;i++)
    	cin>>a[i];
    ll sum=accumulate(a,a+n,0);
    // cout<<sum<<endl;
    if (sum%2==1)
    	cout<<"NO"<<endl;
    else
    {
    	bool p=f(n-1,sum/2);
    	if (p)	c++;
    	if (sum%360==0)	c++;
    	if (c>0)	cout<<"YES"<<endl;
    	else	cout<<"NO"<<endl;
    }
}
