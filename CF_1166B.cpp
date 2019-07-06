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
ll prime(ll n)
{
	ll c=0,i;
	for (i=2;i*i<=n;i++)
	{
		if (n%i==0)
		{
			c++;
			break;
		}
	}
	if (c)	return 0;
	else	return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll k;cin>>k;
	if (k==1 or prime(k))
	{
		cout<<-1<<endl;
	}
	else
	{
		// cout<<1<<endl;
		ll i,j,n,m;
		for (i=sqrt(k);i>=1;i--)
		{
			if (k%i==0)
			{
				n=i;
				m=k/i;
				break;
			}
		}
		if (min(n,m)<5)	cout<<-1<<endl;
		else
		{
			char c[n][m];
			for (i=0;i<n;i++)
			{
				for (j=0;j<m;j++)
					c[i][j]='x';
			}
			ll p=m-n;
			ll aa=0,e=1,ii=2,o=3,u=4;
			for (i=0;i<n;i++)
			{
				c[i][aa]='a';
				c[i][e]='e';
				c[i][ii]='i';
				c[i][o]='o';
				c[i][u]='u';
				aa=(aa+1)%n;
				e=(e+1)%n;
				ii=(ii+1)%n;
				o=(o+1)%n;
				u=(u+1)%n;
			}
			for (i=n;i<m;i++)
			{
				c[0][i]='a';
				c[1][i]='e';
				c[2][i]='i';
				c[3][i]='o';
				c[4][i]='u';
			}
			for (i=0;i<n;i++)
			{
				for (j=0;j<m;j++)
					cout<<c[i][j];
				// cout<<endl;
			}
		}
	}	
}
