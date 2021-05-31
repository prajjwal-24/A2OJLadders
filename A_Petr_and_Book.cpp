#include <bits/stdc++.h>
#define int long long int
using namespace std;
 
 int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    int a[7];
  
    for(int i=0;i<7;i++){
        cin>>a[i];
        }
   int sum=0;
   int i=0;
   while(true){
       sum+=a[i];
       if(sum>=n)
       {
           cout<<i+1;
           break;
       }
       i=i++;
       i=i%7;
   }
   
    
return 0;
}