//AUTHOR: *Akash Shrivastva*
//Birla Institute of Technology,Mesra,India
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define MAX 1000000000000000000
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
	ll x0,y0,ax,ay,bx,by;cin>>x0>>y0>>ax>>ay>>bx>>by;
	ll xs,ys,t;cin>>xs>>ys>>t;
	vll x,y;
	ll i,j;
	x.pb(x0), y.pb(y0);
	while ((ax*x[x.size()-1]+bx)<=MAX and (ay*y[y.size()-1]+by)<=MAX)
	{
		x.pb(ax*x[x.size()-1]+bx);
		y.pb(ay*y[y.size()-1]+by);
	}
	ll len=x.size();
	len--;
	if (len==0)
	{
		if (abs(x0-xs)+abs(ys-y0)<=t)
			cout<<1<<endl;
		else	cout<<0<<endl;
		return 0;
	}
	ll d[len];
	d[0]=abs(x[0]-x[1])+abs(y[0]-y[1]);
	for (i=1;i<len;i++)
		d[i]=d[i-1]+abs(x[i]-x[i+1])+abs(y[i]-y[i+1]);
	ll time,ans=0;
	for (i=0;i<len-1;i++)
	{
		for (j=i;j<len;j++)
		{
			if (i!=j){
				if (i!=0)
					time=d[j-1]-d[i-1];
				else	time=d[j-1];
				time+=min(abs(x[i]-xs)+abs(y[i]-ys), abs(x[j]-xs)+abs(y[j]-ys));
				if (time<=t)
					ans=max(ans,j-i+1);
			}
			else
			{
				time=min(abs(x[i]-xs)+abs(y[i]-ys), abs(x[j]-xs)+abs(y[j]-ys));
				if (time<=t)	ans=max(ans,(ll)1);
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}