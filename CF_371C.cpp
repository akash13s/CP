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
string s1;
ll nb,ns,nc,pb,ps,pc,r,b=0,s=0,c=0;

ll check(ll n)
{
	ll cost=max((ll)0,n*b-nb)*pb+max((ll)0,n*c-nc)*pc+max((ll)0,n*s-ns)*ps;
	if (cost<=r)	return 1;
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
    cin>>s1;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r;
    ll i;
    for (i=0;i<s1.length();i++)
    {
    	if (s1[i]=='B')	b++;
    	else if (s1[i]=='S')	s++;
    	else	c++;
    }
    ll lb=0,up=pow(10,14),ans;
    while (lb<=up)
    {
    	ll mid=(lb+up)/2;
    	if (check(mid))
    		ans=mid,lb=mid+1;
    	else
    		up=mid-1;
    }
    cout<<ans<<endl;
}