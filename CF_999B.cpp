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
	string s;cin>>s;
	ll i;string s1,s2;
	for (i=0;i<n;i++)
	{
		if (n%(i+1)==0)
		{
			s1=s.substr(0,i+1);
			reverse(s1.begin(),s1.end());
			s2=s1+s.substr(i+1);
			s=s2;
		}
	}
	cout<<s2<<endl;
}