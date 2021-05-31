#include <bits/stdc++.h>
using namespace std;
 
 int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int count=0;
    while(t--){
        int a,b,c,d=0;
        cin>>a>>b>>c;
        if(a)
        d++;
        if(b)
        d++;
        if(c)
        d++;

        if(d>=2)
        count++;
    }

    cout<<count;
return 0;
}