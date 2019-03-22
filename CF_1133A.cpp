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
	ll h1,m1,h2,m2;char c1,c2;
	cin>>h1>>c1>>m1;
	cin>>h2>>c2>>m2;

	ll d=(h2-h1)*60+m2-m1;
	d/=2;
	ll h=d/60;ll m=d%60;
	ll hr=h;
	if (m+m1>=60)	hr++;
	m=(m+m1)%60;
	hr+=h1;
	if (hr<10 and m>9)
		cout<<0<<hr<<":"<<m<<endl;
	else if (hr>9 and m<10)
		cout<<hr<<":0"<<m<<endl;
	else if (hr<10 and m<10)
		cout<<0<<hr<<":0"<<m<<endl;
	else
		cout<<hr<<":"<<m<<endl;
}