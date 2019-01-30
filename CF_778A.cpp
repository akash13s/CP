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
ll isSubsequence(char s[],string s1,ll n,ll m)
{
	if (m==0)	return 1;
	if (n==0)	return 0;
	if (s[n-1]==s1[m-1])
		return isSubsequence(s,s1,n-1,m-1);
	else	return isSubsequence(s,s1,n-1,m);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	string s,s1;cin>>s>>s1;
	ll n=s.length();ll m=s1.length();
	ll a[n],i;char ss[n];
	for (i=0;i<n;i++)	cin>>a[i];
	// string b[n+1];string prev=s;
	// b[0]=s;
	// for (i=1;i<=n;i++)
	// 	prev[a[i-1]-1]='1',b[i]=prev;
	ll lb=0,up=n-m+1,mid,ans;
	while (lb<=up)
	{
		mid=(lb+up)/2;
		for (i=0;i<n;i++)	ss[i]=s[i];
		for (i=0;i<mid;i++)
			ss[a[i]-1]='1';
		if (isSubsequence(ss,s1,n,m))
			ans=mid,lb=mid+1;
		else	up=mid-1;
	}
	cout<<ans<<endl;
}