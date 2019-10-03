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
    string a;cin>>a;
    ll q,i;cin>>q;
    set<ll> s[26];
    for (i=0;i<a.length();i++)
        s[a[i]-'a'].insert(i);
    while (q--)
    {
        ll t;cin>>t;
        if (t==1)
        {
            ll pos;char c;
            cin>>pos>>c;
            pos--;
            s[a[pos]-'a'].erase(pos);
            a[pos]=c;
            s[a[pos]-'a'].insert(pos);
        }
        else
        {
            ll l,r;cin>>l>>r;
            l--;r--;
            ll cnt=0;
            for (i=0;i<26;i++)
            {
                auto itr=s[i].lower_bound(l);
                if (itr!=s[i].end() and *itr<=r)  cnt++;
            }
            cout<<cnt<<"\n";
        }
    }
}