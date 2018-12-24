//AUTHOR: *Akash Shrivastva*
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
		double d;cin>>d;
		if (d*d-4*d<0)
			printf("N\n");
		else
		{
			double a1,a2,b1,b2;
			a1=(sqrt(d*d-4*d)+d)/2;
			a2=(-sqrt(d*d-4*d)+d)/2;
			b1=d-a1;b2=d-a2;
			printf("Y ");
			if (a1+b1==d)
				printf("%0.12lf ",a1),printf("%0.12lf ",b1),printf("\n");
			else
				printf("%0.12lf ",a2),printf("%0.12lf ",b2),printf("\n");
		}
	}
}
