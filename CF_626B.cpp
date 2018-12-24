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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	ll n,i;cin>>n;
	string s;cin>>s;
	ll b=0,g=0,r=0;
	for (i=0;i<n;i++)
	{
		if (s[i]=='B')	b++;
		else if (s[i]=='G')	g++;
		else	r++;
	}
	if (b>0 and g>0 and r>0)
		cout<<"BGR";
	else if ((b>1 and g>1 and r<2) or (b>1 and g<2 and r>1) or (b<2 and g>1 and r>1))
		cout<<"BGR";
	else if (b==1 and g==1 and r==0)
		cout<<"R";
	else if (b==1 and g==0 and r==1)
		cout<<"G";
	else if (b==0 and g==1 and r==1)
		cout<<"B";
	else if (b>0 and g==0 and r==0)
		cout<<"B";
	else if (b==0 and g>0 and r==0)
		cout<<"G";
	else if (b==0 and g==0 and r>0)
		cout<<"R";
	else
	{
		if (b>=2 and (g==1 or g==0) and (r==0 or r==1))
			cout<<"GR";
		else if ((b==1 or b==0) and g>=2 and (r==0 or r==1))
			cout<<"BR";
		else 
			cout<<"BG";
	}
}
