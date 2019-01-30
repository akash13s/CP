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
ll a[4][4];
void check(ll op)
{
	ll i,j,k,f=0;
	if (op==0){
		for (i=0;i<4;i++)
		{
			for (j=0;j<4;j++)
			{
				if (a[i][j]==)
			}
		}
	}
	else
	{

	}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	string s;cin>>s;
	ll i,j,k,l=1,f=0;ll n=s.length();
	for (k=0;k<n;k++)
	{
		if (s[i]=='0')
		{
			f=0;
			for (i=0;i<4;i++)
			{
				for (j=0;j<4;j++)
				{
					if (i+1<4 and a[i][j]==0 and a[i+1][j]==0)
					{
						a[i][j]=l,a[i+1][j]=l,l++;
						f++;break;
					}
				}
				if (f)	break;
			}
		}
		else
		{
			f=0;
			for (i=0;i<4;i++)
			{
				for (j=0;j<4;j++)
				{
					if (j+1<4 and a[i][j]==0 and a[i][j+1]==0)
					{
						a[i][j]=l,a[i][j+1]=l,l++;
						f++;break;
					}
				}
				if (f)	break;
			}
		}
		if (s[i]=='0')	check(0);
		else	check(1);
		check1();
	}
}