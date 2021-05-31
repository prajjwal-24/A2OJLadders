#include <bits/stdc++.h>
#define int long long int
using namespace std;
 
 int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k;
    cin>>n>>k;

    // 1 3 5 7 9 
    // 2 4 6 8 10

    // 1 3 5 7 2 4 6
    bool check=false;
    if(n%2==0){
        check=true;
    }
    
    int countE=0,countO=0;
    if(check)
    {
        countE=n/2;
        countO=n/2;
    }
    else{
        countO=n/2 +1;
        countE=n-countO;
    }
// an=a+(n-1)d > 1+2d
    if(k<=countO){
        cout<<(2*k-1)<<"\n";
    }
    //2+(kleft-1)*2=
    else{
        cout<<2+(k-countO-1)*2<<"\n";
    }
return 0;
}