#include <bits/stdc++.h>
using namespace std;
 
 int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>v;
    int miInd,mxInd;
    int mx=0,mi=1000;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        if(x>mx){
            mxInd=i;
            mx=x;
        }

        if(x<=mi){
            miInd=i;
            mi=x;
        }
    }

   
 
    if(mxInd>miInd)
    cout<<mxInd-1+n-miInd-1;
    else
    cout<<mxInd-1+n-miInd;

return 0;
}