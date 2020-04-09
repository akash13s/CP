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
		ll n,s,k;cin>>n>>s>>k;
		ll a[k],i;
		for (i=0;i<k;i++)	cin>>a[i];
		ll l=0,r=0,ans;
		sort(a,a+k);
		if (!binary_search(a,a+k,s))	ans=0;
		else 
		{
			ll left=0,right=0,ind;
			ind=lower_bound(a,a+k,s)-a;
			for (i=ind+1;i<k;i++)
			{
				if ((a[i]-a[i-1])>1)
				{
					r=1;
					right+=1;
					break;
				}
				else right+=1;
			}
			if (r==0)
			{
				if (a[k-1]<n)	right+=1, r=1;
			}	
			for (i=ind-1;i>=0;i--)
			{
				if ((a[i+1]-a[i])>1)
				{
					l=1;
					left+=1;
					break;
				}
				else left+=1;
			}
			if (l==0)
			{
				if (a[0]>1)	left+=1, l=1;
			}
			if (l and r)	ans=min(left,right);
			else if (!l)	ans=right;
			else	ans=left;
		}
		cout<<ans<<endl;
	}
}