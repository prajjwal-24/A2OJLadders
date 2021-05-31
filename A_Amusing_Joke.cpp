#include <bits/stdc++.h>
using namespace std;
 
 int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    map<char,int>m,m3;
    
    for(auto it:s1)
    m[it]++;
    for(auto it:s2)
    m[it]++;
    for(auto it:s3)
    m3[it]++;
    int flag=0;
    for(auto it:m3){
        if(m3[it.first]!=m[it.first])
        {
            cout<<"NO\n";
            flag=1;
            break;
        }
    }
    if(!flag && m.size()==m3.size())
    cout<<"YES\n";
    else if(!flag && m.size()!=m3.size())
    cout<<"NO\n";
return 0;
}