#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
ll k, b, n, t, c, ans;
 
int main(){
    scanf("%lld%lld%lld%lld",&k,&b,&n,&t);
    c=1;
    while(c<=t){
        ans ++;
        c = k*c+b;
    }
    printf("%lld\n",max(0LL,n-ans+1));
    return 0;
}