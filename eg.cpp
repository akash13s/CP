#include<bits/stdc++.h> 
using namespace std; 
typedef long long int ll;
typedef long double ld;
// Define the number of runs for the test data 
// generated 
#define RUN 10
  
// Define the range of the test data generated 
#define MAX1 100
  
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
    cout<<RUN<<endl;
    for (i=1;i<=RUN;i++)
    {
        ll a=rand()%MAX1+1;
        cout<<a<<" ";
       
    }
    cout<<endl;
    for (i=1;i<=RUN;i++)
    {
        ll a=rand()%MAX1+1;
        cout<<a<<" ";
        
    }
    //fclose(stdout); 
    return(0); 
} 