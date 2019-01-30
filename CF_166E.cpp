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
		int i,pos;
		int n;

		cin >> n;
		ll sol=0,prod=1;
		for(i=1; i<n; i++)
		{
			prod = (prod*3)%M;
			sol = prod-sol;
			if(sol>=M)
				sol -= M;
			else if(sol < 0)
				sol += M;
		}
		cout << sol << endl;
	}
