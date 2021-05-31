#include <bits/stdc++.h>
using namespace std;
 
 int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<char,int>m;
    string s;
    cin>>s;
    for(auto it:s)
    m[it]++;

    if(m.size()%2==1)
    cout<<"IGNORE HIM!\n";
    else
    cout<<"CHAT WITH HER!\n";

return 0;
}