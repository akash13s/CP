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
ll a[3][3];
ll check1(ll i,ll j)
{
	if (a[i][0]<=a[j][0] and a[i][1]<=a[j][1] and a[i][2]<=a[j][2]){
		if (a[j][0]>a[i][0] or a[j][1]>a[i][1] or a[j][2]>a[i][2])
			return 1;
		else	return 0;
	}
	else	return 0;
}
ll check(ll i,ll j,ll k)
{
	if (check1(i,j) and check1(j,k))	return 1;
	else	return 0;
}
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
    	ll i,j;
    	a[3][3];
    	for (i=0;i<3;i++)
    		for (j=0;j<3;j++)
    			cin>>a[i][j];
    	if (check(0,2,1) or check(2,0,1) or check(1,2,0) or check(2,1,0) or check(0,1,2) or check(1,0,2))
    		cout<<"yes\n";
    	else	cout<<"no\n";
    }
}