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
	ll t;cin>>t;
	while (t--)
	{
		int n,k;cin>>n>>k;
		char ch[n];int i=0,j;
		// for (i=0;i<k;i++)
		// 	ch[i]='a'+i;
		// for (i=k;i<n;i++)
		// 	ch[i]='a';
		while (i<n)
		{
			for (j=0;j<k;j++)
				ch[i+j]=j+'a';
			i+=k;
		}
		for (i=0;i<n;i++)
			cout<<ch[i];
		cout<<endl;
	}
}
