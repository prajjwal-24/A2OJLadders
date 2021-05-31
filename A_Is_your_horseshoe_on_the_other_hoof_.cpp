#include <bits/stdc++.h>
using namespace std;
 
 int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    map<int,int>m;
    m[a]++,m[b]++,m[c]++,m[d]++;
    cout<<4-m.size();
return 0;
}