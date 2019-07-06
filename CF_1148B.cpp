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
	ll n,m,ta,tb,k;cin>>n>>m>>ta>>tb>>k;
	ll a[n],b[m],i,j;
	for (i=0;i<n;i++)	cin>>a[i];
	for (i=0;i<m;i++)	cin>>b[i];
	i=0;
	vll a1,b1; ll c=0,f=0,ind;
	while (c<k and i<n)
	{
			c++;
			if (c%2==1)	a1.pb(i),i++;
			else	{
	
				ind=lower_bound(b,b+m,a[i]+ta)-b;
				b1.pb(ind);
				i++;		
			}
			
			if (a1.size()==n or b1.size()==m )	{f=1;break;}
	}
	if (f)	cout<<-1<<endl;
	else	{
		// cout<<b1[b1.size()-1]<<endl;
		if (b1.size()>0)
			ind=b1[b1.size()-1]+1;
		else	{
			ind=lower_bound(b,b+m,a[a1[a1.size()-1]+1])-b;
		}
		if (ind<m)	cout<<b[ind]+tb<<endl;
		else	cout<<-1<<endl;
	}
}
