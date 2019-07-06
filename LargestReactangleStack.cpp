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
		ll a[n],i;for (i=0;i<n;i++)	cin>>a[i];
		stack<ll> s;
		i=0;
		ll ans=0,p;
		while (i<n)
		{
			if (s.empty() or a[i]>=a[s.top()])
				s.push(i),i++;
			else
			{
				while (!s.empty() and a[s.top()]>a[i])
				{
					p=s.top();
					s.pop();
					if (s.empty())	ans=max(ans,a[p]*i);
					else	ans=max(ans,a[p]*(i-s.top()-1));
				}
			}
		}
		if (!s.empty())
		{
			while (!s.empty())
			{
				p=s.top();
				s.pop();
				if (s.empty())	ans=max(ans,a[p]*i);
				else	ans=max(ans,a[p]*(i-s.top()-1));
			}
		}
		cout<<ans<<endl;
	}
}
