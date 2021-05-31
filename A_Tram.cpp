#include <bits/stdc++.h>
using namespace std;
 
 int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int cap=0;
    int mxCap=0;
    while(t--){
        pair<int,int>p;
        cin>>p.first;
        cin>>p.second;

        cap+=p.second-p.first;
        mxCap=max(mxCap,cap);
    }

    cout<<mxCap;
return 0;
}