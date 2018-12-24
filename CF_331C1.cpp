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
    int n;cin>>n;
 	int d,i,cnt=0;string s;
    while (n!=0)
    {
    	s=to_string(n);
    	d=s[0]-'0';
    	for (i=1;i<s.length();i++)
    		d=max(d,s[i]-'0');
    	cnt++;n-=d;
    }
    cout<<cnt<<endl;
}
