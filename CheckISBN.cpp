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
    string s;cin>>s;
    if (s.length()!=10) {
        cout<<"Not special"<<endl;
        return 0;
    }
    int sum=0,i;
    for (i=0;i<s.length();i++)
    {
    	sum+=(s[i]-'0')*(i+1);
    }
    if (sum%11==0)	cout<<"Special"<<endl;
    else	cout<<"Not special"<<endl;
}