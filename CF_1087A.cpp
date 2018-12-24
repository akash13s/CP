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
	string s;cin>>s;
	ll len=s.length();
	ll l,r,mid;
	if (len%2==0)	mid=len/2-1;
	else	mid=len/2;
	l=mid-1;r=mid+1;
	ll c=0;
	cout<<s[mid];
	while (c<len-1)
	{
		if (c%2==0)	cout<<s[r],r++;
		else	cout<<s[l],l--;
		c++;
	}
}
