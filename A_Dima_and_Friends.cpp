
#include <bits/stdc++.h>
#define int long long int
using namespace std;
 // 272 A nahi bana tha first attempt m
 int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    int sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=x;
    }

   int count=0;
   for(int i=1;i<=5;i++){
       if((sum+i)%(n+1)!=1)
        count++;
   }

   cout<<count;
return 0;
}