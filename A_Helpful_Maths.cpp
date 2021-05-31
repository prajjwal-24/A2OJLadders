#include <bits/stdc++.h>
using namespace std;
 
 int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;

    sort(s.begin(),s.end());

    s.erase(0,s.length()/2);
    cout<<s[0];
    for(int i=1;i<s.length();i++)
    cout<<"+"<<s[i];

return 0;
}