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
	ll n;cin>>n;
	string s1;cin>>s1;
	string s[6];
	s[0]="GRB",s[1]="BRG",s[2]="BGR",s[3]="RGB",s[4]="RBG",s[5]="GBR";
	ll i,j,c,ans=INT_MAX,id;
	for (i=0;i<6;i++)
	{
		c=0;
		for (j=0;j<n;j++)
		{
			if (s1[j]==s[i][j%3])	continue;
			else	c++;
		}
		if (c<ans)	ans=c,id=i;
	}
	cout<<ans<<endl;
	for (i=0;i<n;i++)	cout<<s[id][i%3];
}
