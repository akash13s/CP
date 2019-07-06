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
	ll ma=4294967295;
	ll l;cin>>l;
	ll x=0,cnt=0,flag=0;
	stack<ll> st;
	while (l--)
	{
		string s;cin>>s;
		if (s[0]=='a')	
		{
			if (st.empty())
			{
				x++;
				if (x>ma)
				{
					flag=1;
					break;
				}
			}
			else	cnt++;
		}
		else if (s[0]=='f')
		{
			ll k;
			cin>>k;
			st.push(k);
		}
		else	
		{
			cnt*=st.top();
			st.pop();
			if (st.empty())
			{
				if (cnt>ma or x>ma or cnt+x>ma)
				{
					flag=1;
					break;
				}
				else	x+=cnt,cnt=0;
			}
			else
			{
				if (st.top()>ma or cnt>ma or cnt*st.top()>ma)
				{
					flag=1;
					break;
				}
			}
		}
	}
	if (flag)	cout<<"OVERFLOW!!!"<<endl;
	else	cout<<x<<endl;
}
