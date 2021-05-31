#include <bits/stdc++.h>
#define int long long int
using namespace std;
 
 int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    int miDiff=INT_MAX,curr=-1,nxt=-1;
    int currInd=-1,nxtInd=-1;
    
    for(int i=0;i<n;i++){
        if(abs(a[i]-a[(i+1)%n])<miDiff)
        {
            miDiff=abs(a[i]-a[(i+1)%n]);
            currInd=i;
            nxtInd=(i+1)%n;
        }
        else if(abs(a[i]-a[(i+n-1)%n])<miDiff)
        {
            miDiff=abs(a[i]-a[(i+1)%n]);
            nxtInd=i;
            currInd=(i+n-1)%n;
        }
    }
    cout<<currInd+1<<" "<<nxtInd+1;
    
return 0;
}