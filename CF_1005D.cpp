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
	string a;cin>>a;
	ll n=a.length();
	ll i,c=0,s=0,nu;
	for (i=0;i<n;i++)
	{
		nu=a[i]-'0';
		if (nu%3==0)	c++;
		else if (nu%3==1)
		{
			if (i+1==n)	break;
			if ((a[i+1]-'0')%3==2)
				c++,i++;
			if (i+2==n)	break;
			if ((a[i+1]-'0')%3==1 and (a[i+2]-'0')%3==1){
				c++,i+=2;
				continue;
			}
		}
		else
		{
			if (i+1==n)	break;
			if ((a[i+1]-'0')%3==1)
				c++,i++;
			if (i+2==n)	break;
			if ((a[i+1]-'0')%3==2 and (a[i+2]-'0')%3==2){
				c++,i+=2;
				continue;
			}
		}
	}
	cout<<c<<endl;
}