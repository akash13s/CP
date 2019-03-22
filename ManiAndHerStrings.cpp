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
		string a;cin>>a;
		ll k;cin>>k;
		stack< pair <char,ll> > s;
		ll i,n;n=a.length();
		ll cnt;char ch;
		for (i=0;i<n;i++)
		{
			if (s.empty())	s.push(mp(a[i],1));
			else
			{
				if (a[i]!=s.top().F)	s.push(mp(a[i],1));
				else
				{
					ch=s.top().F;cnt=s.top().S;
					cnt++;
					cnt%=k;
					s.pop();
					if (cnt!=0)
						s.push(mp(ch,cnt));
				}
			}
		}
		stack < pair< char,ll > > s1;
		while (!s.empty())
		{
			s1.push(s.top());
			// cout<<s.top().F<<" "<<s.top().S<<endl;
			s.pop();
		}
		while(!s1.empty())
		{
			ch=s1.top().F;
			cnt=s1.top().S;
			for (i=1;i<=cnt;i++)	cout<<ch;
			s1.pop();
		}
		cout<<endl;	
	}
}