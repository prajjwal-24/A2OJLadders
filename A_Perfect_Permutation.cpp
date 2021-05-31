#include <bits/stdc++.h>
using namespace std;
 
 int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    vector<int>v;

    while(n){
        v.push_back(n);
        n--;
    }

    do{
        int count=0;
        for(int i=0;i<v.size();i++)
        if(v[v[i]]==i)
        count++;

        if(count==v.size())
        {
            for(auto it:v)
            cout<<it;
            break;
        }
        
    }while(next_permutation(v.begin(),v.end()));
return 0;
}