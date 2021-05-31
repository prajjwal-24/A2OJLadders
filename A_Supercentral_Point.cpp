#include <bits/stdc++.h>
#define int long long int
using namespace std;
 
 int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        pair<int,int>p;
        cin>>p.first;
        cin>>p.second;
        v.push_back(p);
    }
    int count=0;
    for(int i=0;i<n;i++){
          int countR=0,countL=0,countU=0,countD=0;
        for(int j=0;j<n;j++){
            if((v[j].first>v[i].first && v[j].second==v[i].second))
            countR++;
 
            if((v[j].first<v[i].first && v[j].second==v[i].second))
            countL++;

            if((v[j].first==v[i].first && v[j].second>v[i].second))
            countU++;

            if((v[j].first==v[i].first && v[j].second<v[i].second))
            countD++;

            if(countU>0 && countL>0 && countD>0 && countR>0){
                // if(countU+countR+countD+countL>=4)
                // {
                //     count++;
                //     break;
                // }
                count++;
                break;
            }
            
        }
    }

cout<<count;

return 0;
}