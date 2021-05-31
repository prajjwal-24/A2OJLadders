#include <bits/stdc++.h>
#define int long long int
using namespace std;
 ////// beware of succh problems !!!! 
 // bewakoof banaya bada maja aaya
 int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int n;
   cin>>n;
   if(n==2){
       cout<<"0 1 1";
   }
   else if(n==3){
       cout<<"1 1 1";
   }
   else{
//        int f[n+1];
//    f[0]=0;
//    f[1]=1;
//    for(int i=2;i<=n;i++){
//        f[i]=f[i-1]+f[i-2];
//    }
//     bool check=false;
//    for(int i=1;i<n;i++){
//        int left=i+1,right=n-1;
//        int target=n-f[i];
//        if(f[left]+f[right]<target)
//        left++;
//        else if(f[left]+f[right]>target)
//        right--;
//        else{
//            check=true;
//            cout<<f[i]<<" "<<f[left]<<" "<<f[right];
//            break;
//        }
//    }
//    if(!check)
//    cout<<"I'm too stupid to solve this problem";
  cout<<"0 0 "<<n;
   }
   
return 0;
}