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
	ll q;cin>>q;
	while (q--)
	{
		ll l;cin>>l;
		string s;cin>>s;ll i,n1,n2;
		if (l==2)
		{
			n1=s[0]-'0';
			n2=s[1]-'0';
			if (n2>n1)
			{
				cout<<"YES"<<endl;
				cout<<2<<endl;
				cout<<n1<<" "<<n2<<endl;
			}
			else	cout<<"NO"<<endl;
		}
		else
		{
			string s2=s.substr(1);
			cout<<"YES"<<endl;
			cout<<2<<endl;
			cout<<s[0]<<" "<<s2<<endl;
		}
	}
}