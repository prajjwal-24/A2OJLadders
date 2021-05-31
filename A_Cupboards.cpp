#include <bits/stdc++.h>
using namespace std;
 
 int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    vector<pair<int,int>>v;
    int countLO=0,countLC=0,countRC=0,countRO=0;
    while(t--){
        pair<int,int>p;
        cin>>p.first;
        cin>>p.second;
        if(p.first)
        countLO++;
        else 
        countLC++;

        if(p.second)
        countRO++;
        else
        countRC++;
        v.push_back(p);
    }
    
    cout<<min(countLO,countLC)+min(countRO,countRC);
    
return 0;
}