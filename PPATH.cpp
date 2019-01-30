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
ll prime[10000];
void sieve()
{
	memset(prime,1,sizeof(prime));
	ll i,j;
	for (i=2;i*i<=10000;i++)
	{
		if (prime[i])
		{
			for (j=2*i;j<=10000;j+=i)
				prime[j]=0;
		}
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
	sieve();
	ll t;cin>>t;
	while (t--)
	{
		ll n,m;cin>>n>>m;
		ll vis[10000];
		memset(vis,0,sizeof(vis));
		queue<pair<ll,ll>>  q;
		q.push(mp(n,0));ll on,te,h,th,num,nu,i,flag=0;
		vis[n]=1;
		while (!q.empty())
		{
			num=q.front().F;
			if (num==m)
			{
				flag=1;
				cout<<q.front().S<<endl;
				break;
			}
			on=num%10;
			num/=10;
			te=num%10;
			num/=10;
			h=num%10;
			num/=10;
			th=num%10;
			//ones
			for (i=0;i<=9;i++)
			{
				nu=th*1000+h*100+te*10+i;
				if (prime[nu] and !vis[nu])
					q.push(mp(nu,q.front().S+1)),vis[nu]=1;
			}
			//tens
			for (i=0;i<=9;i++)
			{
				nu=th*1000+h*100+i*10+on;
				if (prime[nu] and !vis[nu])
					q.push(mp(nu,q.front().S+1)),vis[nu]=1;
			}
			for (i=0;i<=9;i++)
			{
				nu=th*1000+i*100+te*10+on;
				if (prime[nu] and !vis[nu])
					q.push(mp(nu,q.front().S+1)),vis[nu]=1;
			}
			for (i=1;i<=9;i++)
			{
				nu=i*1000+h*100+te*10+on;
				if (prime[nu] and !vis[nu])
					q.push(mp(nu,q.front().S+1)),vis[nu]=1;
			}
			q.pop();
		}
		if (flag==0)	cout<<"Impossible"<<endl;
	}
}
