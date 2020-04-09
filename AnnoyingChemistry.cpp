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
	ll x,y,p,q;
	cin>>x>>y>>p>>q;
	ll b1_nr,b1_dr,b2_nr,b2_dr,b3_nr,b3_dr;

	b2_nr= 1;
	b1_nr= p*y;b1_dr= q*x;
	ll g1= __gcd(b1_dr,b1_nr);
	b1_nr/=g1, b1_dr/=g1;
	ll g2= __gcd(y,q);
	b3_nr=y/g2;
	b3_dr=q/g2;
	ll g3= (b3_dr*b1_dr)/(__gcd(b3_dr,b1_dr));
	// cout<<g3<<endl;
	b1_nr= (b1_nr*g3)/b1_dr;
	b2_nr= (b2_nr*g3);
	b3_nr= (b3_nr*g3)/b3_dr;
	cout<<b1_nr<<" "<<b2_nr<<" "<<b3_nr<<endl;
}