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
	ll t;cin>>t;
	while (t--)
	{
	ll n;cin>>n;
	string s;cin>>s;
	if (n<11)	cout<<"NO"<<endl;
	else
	{
		ll pos,c=0,i;
		for (i=0;i<n;i++)
		{
			if (s[i]=='8')
			{
				pos=i;
				c++;
				break;
			}
		}
		if (!c)	cout<<"NO"<<endl;
		else
		{
			if ((n-1-(pos+1)+1)>=10)	cout<<"YES"<<endl;
			else	cout<<"NO"<<endl;
		}
	}
	}
}
