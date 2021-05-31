#include <bits/stdc++.h>
#define int long long int
using namespace std;
 
 int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int a[n],pos[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        pos[a[i]]=i+1;
    }
    
    int countV=0,countP=0;
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        countV+=pos[b[i]];
        countP+=n-pos[b[i]]+1;
    }

    //vasya
   
    

    cout<<countV<<" "<<countP;

return 0;
}