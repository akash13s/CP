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
ll Arr[500005],size[500005];
ll N,m;

void initialize()
{
    for(ll i = 0;i<=N;i++)
    {
		Arr[ i ] = i ;
		size[ i ] = 1;
	}
}

ll root(ll i)
{
    while(Arr[ i ] != i)           //chase parent of current element until it reaches root.
    {
     i = Arr[ i ];
    }
    return i;
}

void union1(ll A,ll B)
{
    ll root_A = root(A);
    ll root_B = root(B);
    if(size[root_A] < size[root_B ])
    {
	Arr[ root_A ] = Arr[root_B];
	size[root_B] += size[root_A];
	}
	else
	{
	Arr[ root_B ] = Arr[root_A];
	size[root_A] += size[root_B];
	}
}

bool find(ll A,ll B)
{
    if( root(A)==root(B) )       //if A and B have same root,means they are connected.
    return true;
    else
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	
	cin>>N>>m;
	initialize();
	ll i,j;
	for (i=0;i<m;i++)
	{
		ll x;cin>>x;
		
		if (x)
		{
			ll n1;
			cin>>n1;
			for (j=1;j<x;j++)
			{
				ll nd;cin>>nd;
				if (root(n1)!=root(nd))
					union1(n1,nd);
			}
		}
		
	}
	for (i=1;i<=N;i++)
	{
		ll par=root(i);
		cout<<size[par]<<" ";
	}
}
