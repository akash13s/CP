#include<bits/stdc++.h>
using namespace std;

int check(int x,int n)
{
    if (x*x+x>=n) return 1;
    else  return 0;
}
void isKthBitSet(int n, int k) 
{ 
  if (n & (1 << (k - 1))) 
    cout << "SET"; 
  else
    cout << "NOT SET"; 
} 

// Driver code 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
// Driver code 
   
    int k=31 & 31 & 83 & 127;
    cout<<k<<endl; 
    return 0; 
    // cout<<log2(2000000000)<<endl;
}


// int dp[100005][5];
// int f(int i,int j,vector <int> &a)
// {
//     if (dp[i][j]!=-1)   return dp[i][j];
//     if (j<=0)   return INT_MAX;
//     if (i==a.size() and j!=0)   return 0;
//     else
//     {
//         dp[i][j]=max(f(i+1,j,a),a[i]&f(i+1,j-1,a));
//         return dp[i][j];   
//     }
// }

// int Solution::solve(vector<int> &A) {
//     dp[A.size()][5];
//     memset(dp,-1,sizeof(dp));
//     return f(0,4,A);
// }
