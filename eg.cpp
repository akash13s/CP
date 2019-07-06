#include<bits/stdc++.h> 
using namespace std; 
typedef long long int ll;
typedef long double ld;
// Define the number of runs for the test data 
// generated 
#define RUN 500000
  
// Define the range of the test data generated 
#define MAX1 2
  
int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // Uncomment the below line to store 
    // the test data in a file 
    // freopen("Test_Cases.in", "w", stdout); 
  
    // For random values every time 
    srand(time(NULL)); 
    ll i;
    for (i=1; i<=RUN; i++) 
        cout<<rand()%MAX1<<" ";
    // for (i=1;i<=RUN;i++)    
    //     cout<<1<<" "<<1<<endl;
    
    // Uncomment the below line to store 
    // the test data in a file 
    //fclose(stdout); 
    return(0); 
} 