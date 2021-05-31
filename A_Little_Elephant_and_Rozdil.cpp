#include <bits/stdc++.h>
#define int long long int
using namespace std;
 
 int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    map<int,int>m;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        m[x]++;
        mp[x]=i;
    }


    if((m.begin()->second)>1)
    cout<<"Still Rozdil\n";
    else
    cout<<mp.begin()->second+1;
return 0;
}