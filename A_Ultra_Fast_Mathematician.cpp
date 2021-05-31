// XOR SE KARNE M DIKKAT

#include <bits/stdc++.h>
using namespace std;
 
 int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string n,m;
    cin>>n>>m;

    for(int i=0;i<n.length();i++){
        if(n[i]!=m[i])
        cout<<"1";
        else
        cout<<"0";
    }
    
    
return 0;
}