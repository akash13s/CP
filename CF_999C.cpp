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
	string s;cin>>s;
	ll i,a[26];map<ll,ll> m;
	memset(a,0,sizeof(a));
	for (i=0;i<n;i++)
		a[s[i]-'a']++;
	for (i=0;i<26;i++)
	{
		if (a[i]>0 and k>0)
		{
			if (a[i]>=k)
				a[i]-=k,m[i]=k,k=0;
			else 
				m[i]=-1,k-=a[i],a[i]=0;	
		}
	}
	// for (i=0;i<26;i++)
	// 	cout<<a[i]<<" "<<m[i]<<endl;
	string s1;
	for (i=0;i<n;i++)
	{
		if (m[s[i]-'a']==-1)	continue;
		else if (m[s[i]-'a']==0)	s1+=s[i];
		else if (m[s[i]-'a']>0)	m[s[i]-'a']--;
	}
	cout<<s1<<endl;
}