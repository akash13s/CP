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
	ll n,k;cin>>n>>k;
	ll i,j;
	vll snake,person;
	for (i=0;i<n;i++)
	{
		ll x;cin>>x;
		if (x)	snake.pb(i);
		else	person.pb(i);
	}
	i=0,j=0;
	ll cnt=0;
	while (i<snake.size() and j<person.size())
	{
		if (abs(snake[i]-person[j])<=k)	cnt++,i++,j++;
		else if (person[j]>snake[i])	i++;
		else	j++;
	}
	cout<<cnt<<endl;
}
