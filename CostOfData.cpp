//AUTHOR: *Akash Shrivastva*
//Birla Institute of Technology,Mesra,India
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define M 500500
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define pll vector< pair <ll,ll> >
#define F first
#define S second
#define PII pair <ll,ll>
ll next1[27][M], created[M], end1[M];
int sz=0;
void insert(string s)
{
    ll v=0,i,c;
    for(i=0;i<s.size();i++)
    {
        c=s[i]-'a';
        if(!created[next1[c][v]])
        {
            next1[c][v]=++sz;
            created[sz]=1;
        }
        v=next1[c][v];
    }
    ++end1[v];
}
bool search(string tmp)
{
    ll v=0, i ,c;
    for(i=0;i<tmp.size();i++)
    {
        c=tmp[i]-'a';
        if(!created[next1[c][v]])
            return false;
        v=next1[c][v];
    }

    return end1[v]>0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll n;cin>>n;
    ll i;
    for (i=0;i<n;i++)
    {
        string s;cin>>s;
        insert(s);
    }
    cout<<sz+1<<endl;
}