#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll n;ll vis[2][501];char a[2][501];
bool ok(ll i,ll j)
{
    if (i>=0 and i<2 and j>=0 and j<n)
    {
        if (!vis[i][j] and a[i][j]!='.') return  true;  
        else    return false;
    }
    else    return false;
}
ll count()
{
    ll i,j,c=0;
    for (i=0;i<2;i++)
    {
        for (j=0;j<n;j++)
        {
            if (a[i][j]=='#' and vis[i][j]==1)  c++;

        }
    }
    return c;
}
void dfs(ll i,ll j)
{
    vis[i][j]=1;
    if (ok(i,j+1))    dfs(i,j+1);
    else if (ok(i+1,j))   dfs(i+1,j);
    else if (ok(i,j-1))   dfs(i,j-1);
    else if (ok(i-1,j))   dfs(i-1,j);
    else    return;
}
void dfs1(ll i,ll j)
{
    vis[i][j]=1;
    
    if (ok(i+1,j))   dfs1(i+1,j);
    else if (ok(i,j-1))   dfs1(i,j-1);
    else if (ok(i-1,j))   dfs1(i-1,j);
    else if (ok(i,j+1))    dfs1(i,j+1);
    else    return;
}
void dfs2(ll i,ll j)
{
    vis[i][j]=1;
    
    if (ok(i,j-1))   dfs2(i,j-1);
    else if (ok(i-1,j))   dfs2(i-1,j);
    else if (ok(i,j+1))    dfs2(i,j+1);
    else if (ok(i+1,j))   dfs2(i+1,j);
    else    return;
}
void dfs3(ll i,ll j)
{
    vis[i][j]=1;
    
    if (ok(i-1,j))   dfs3(i-1,j);
    else if (ok(i,j+1))    dfs3(i,j+1);
    else if (ok(i+1,j))   dfs3(i+1,j);
    else if (ok(i,j-1))   dfs3(i,j-1);
    else    return;
}
int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t;cin>>t;
    while (t--)
    {
        ll i,j;cin>>n;
        vis[2][n];ll c=0;
        a[2][n];
        for (i=0;i<2;i++){
            for (j=0;j<n;j++){
                cin>>a[i][j];
                if (a[i][j]=='#')   c++;
            }
        }
        ll k,flag=0;
        for (i=0;i<2;i++)
        {

            for (j=0;j<n;j++)
            {
                if (a[i][j]=='#')
                {
                    memset(vis,0,sizeof(vis));
                    dfs(i,j);
                    k=count();
                    if (k==c) {  flag=1;break;}
                }
            } 
        }
        if (flag)  cout<<"yes"<<endl;
        else {
             for (i=0;i<2;i++)
        {

            for (j=0;j<n;j++)
            {
                if (a[i][j]=='#')
                {
                    memset(vis,0,sizeof(vis));
                    dfs1(i,j);
                    k=count();
                    if (k==c) {  flag=1;break;}
                }
            } 
        
        }
        if (flag)   cout<<"yes"<<endl;
        else
        {
             for (i=0;i<2;i++)
        {

            for (j=0;j<n;j++)
            {
                if (a[i][j]=='#')
                {
                    memset(vis,0,sizeof(vis));
                    dfs2(i,j);
                    k=count();
                    if (k==c) {  flag=1;break;}
                }
            } 
        
        }
        if (flag)   cout<<"yes"<<endl;
        else
        {
             for (i=0;i<2;i++)
        {

            for (j=0;j<n;j++)
            {
                if (a[i][j]=='#')
                {
                    memset(vis,0,sizeof(vis));
                    dfs3(i,j);
                    k=count();
                    if (k==c) {  flag=1;break;}
                }
            } 
        
        }
        if (flag)   cout<<"yes"<<endl;
        else    cout<<"no"<<endl;
    }
}
}
}
}

