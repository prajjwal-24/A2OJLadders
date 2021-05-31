#include <bits/stdc++.h>
using namespace std;
 
 int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    int mx=a[0];
    int count=0;
    int mi=a[0];
    for(int i=0;i<n;i++){
         if(a[i]>mx){
        mx=a[i];
        count++;
    }
    else if(a[i]<mi){
        mi=a[i];
        count++;
    }
    }
  
    cout<<count;
return 0;
}