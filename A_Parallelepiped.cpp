#include <bits/stdc++.h>
#define int long long int
using namespace std;
 
 int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a , b,c;
    cin>>a>>b>>c;
    // x*y=a y*z=b z*x=c 
    //y=a/x,  az/x=b  z=c/x
    // ac/b=x2
    int x= sqrt(a*c/b);
    int y=a/x;
    int z=c/x;

    cout<<4*x+4*y+4*z<<"\n";

    
return 0;
}