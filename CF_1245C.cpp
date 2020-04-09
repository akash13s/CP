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
    ll f[100001],i;
    f[0]=0,f[1]=1,f[2]=2;
    for (i=3;i<=100000;i++)	f[i]=(f[i-1]+f[i-2])%M;
  
    string a;cin>>a;
	ll n=a.length();
	ll flag=0;
	for (i=0;i<n;i++)
	{
		if (a[i]=='m' or a[i]=='w')
		{
			flag=1;
			break;
		}
	}
	if (flag)
	{
		cout<<0<<endl;
		return 0;
	}
	stack< pair<char,ll> > s;
	for (i=0;i<n;i++)
	{
		if (s.empty())	s.push(mp(a[i],1));
		else
		{
			if (s.top().F==a[i])
			{
				ll cnt=s.top().S;
				s.pop();
				s.push(mp(a[i],cnt+1));
			}
			else
			{
				s.push(mp(a[i],1));
			}
		}	
	}
	ll ans=1,k;
	while (!s.empty())
	{
		
		if (s.top().F=='u' or s.top().F=='n')
		{
			k=s.top().S;
			ans*=f[k];
			ans%=M;
		}
		s.pop();
	}
	cout<<ans%M<<endl;
}