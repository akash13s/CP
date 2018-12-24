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
	ll n,s;cin>>n>>s;
	ll a[n],i,c=0,k=0;
	if (s>0 and s<=9*n)
	{
		if (s==1)
		{
			cout<<1;
			for (i=1;i<n;i++)
				cout<<0;
			cout<<" ";
			cout<<1;
			for (i=1;i<n;i++)
				cout<<0;
			cout<<endl;
		}
		else{
		if (s%9==0 and s>=9)
		{
			c=s/9;
			a[0]=1;
			for (i=n-1;i>=n-c+1;i--)
				a[i]=9;
			for (i=1;i<n-c-1;i++)
				a[i]=0;
			if (n-c>0)	a[n-c]=8;
			else	a[n-c]=9;
			for (i=0;i<n;i++)
				cout<<a[i];
			cout<<" ";
			for (i=n-1;i>=0;i--)
			{
				if (a[i]>0)	cout<<a[i];
				else	k++;
			}
			for (i=0;i<k;i++)	cout<<0;
			cout<<endl;

		}
		else if (s%9!=0 and s>=9)
		{
			c=s/9;a[0]=1;
			for (i=n-1;i>=n-c;i--)
				a[i]=9;
			if (n-c-1>0)	a[n-c-1]=s%9-1;
			else	a[n-c-1]=s%9;

			for (i=1;i<n-c-1;i++)
				a[i]=0;
			for (i=0;i<n;i++)
				cout<<a[i];
			cout<<" ";
			for (i=n-1;i>=0;i--)
			{
				if (a[i]>0)	cout<<a[i];
				else	k++;
			}
			for (i=0;i<k;i++)	cout<<0;
			cout<<endl;
		}
		else
		{
			a[0]=1;if (n-1>0)	a[n-1]=s-1;	else	a[n-1]=s;
			for (i=1;i<n-1;i++)
				a[i]=0;
			for (i=0;i<n;i++)
				cout<<a[i];
			cout<<" ";
			cout<<s;
			for (i=1;i<=n-1;i++)
				cout<<0;
			cout<<endl;
		}
		}
	}
	else{
		if (n==1 and s==0)
			cout<<"0 0"<<endl;
		else
			cout<<"-1 -1"<<endl;
	}
}
