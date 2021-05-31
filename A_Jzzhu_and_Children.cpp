#include <bits/stdc++.h>
#define int long long int
using namespace std;
 
 int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;

    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int last=n;
    int max=0;
    for(int i=0;i<n;i++)
    {
        if((ceil((float)a[i]/(float)m))>=max){
              last=i+1;
              max=ceil((float)a[i]/(float)m);
        }
      
    }

    cout<<last;
return 0;
}