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
	ll n;cin>>n;
	ll a[n],i,count[101];
	memset(count,0,sizeof(count));
	for (i=0;i<n;i++){
		cin>>a[i];
		count[a[i]]++;
	}
	char ch[n];ll k,cnt=0;
	for (i=0;i<101;i++)
	{
		if (count[i]==1)
			cnt++;
	}
	
	k=0;ll k1=cnt-cnt/2;
	for (i=0;i<n;i++)
	{
		if (count[a[i]]==1 and k<k1)
			ch[i]='A',k++;
		else
		{
			if (count[a[i]]==1)	ch[i]='B';
			else	ch[i]='A';
		}
	}
	ll p=0;
	if (cnt%2==1)
	{
		p=0;
		for (i=0;i<n;i++)
		{
			if (count[a[i]]>2)
				p++;
		}
		if (p!=0)
		{
			for (i=0;i<n;i++)
			{
				if (count[a[i]]>2)
				{
					ch[i]='B';
					break;
				}
			}
		}
	}
	if (cnt%2==1 and p==0)
		cout<<"NO"<<endl;
	else{
		cout<<"YES"<<endl;
		for (i=0;i<n;i++)
			cout<<ch[i];
		cout<<endl;
	}
}
