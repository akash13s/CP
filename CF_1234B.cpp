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
    deque<ll> q;
    map<ll,ll> m;
    ll n,k;cin>>n>>k;
    ll a[n],i;
    for (i=0;i<n;i++)	cin>>a[i];
    for (i=0;i<n;i++)
    {
    	if (m[a[i]]==0)
    	{
    		if (q.size()<k)
    		{	
    			q.push_front(a[i]);
    			m[a[i]]=1;
    		}
    		else
    		{
    			m[q.back()]=0;
    			q.pop_back();
    			q.push_front(a[i]);
    			m[a[i]]=1;
    		}
    	}
    }
    cout<<q.size()<<endl;
    while (!q.empty())
    {
    	cout<<q.front()<<" ";
    	q.pop_front();
    }
}