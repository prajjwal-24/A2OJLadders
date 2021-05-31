#include <bits/stdc++.h>
using namespace std;
 
 int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int mxt=(k*l)/nl;
    int mxl=(c*d);
    int mxs=p/np;

    cout<<(int)min(mxt, min(mxl,mxs))/n<<"\n";
return 0;
}