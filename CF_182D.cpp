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
ll i,j,l1,l2;string s;
ll f()
{
	ll k,l;
	for (k=0;k<i;k++)
	{
		for (l=1;l<j;l++)
		{
			if (s[k]!=s[k+l*i])
				return 0;
		}
	}
	return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    string s1,s2;cin>>s1>>s2;
    l1=s1.length(),l2=s2.length();
    s=s1+s2;i=1;ll cnt=0;
    while (i<=min(l1,l2))
    {
    	if (l1%i==0 and l2%i==0)
    	{
    		j=(l1+l2)/i;
    		if (f())	cnt++;
    	}
    	i++;
    }
    cout<<cnt<<endl;
}