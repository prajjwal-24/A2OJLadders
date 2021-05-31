#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    vector<int>v1,v2,v3;
    while(t--){
       int a,b,c;
       cin>>a>>b>>c;
       v1.push_back(a);
       v2.push_back(b);
       v3.push_back(c);
    }
    
    if(accumulate(v1.begin(), v1.end(), 0)==0 && accumulate(v2.begin(), v2.end(), 0)==0 &&
    accumulate(v3.begin(), v3.end(), 0)==0)
    cout<<"YES\n";
    
    else
    cout<<"NO\n";
	return 0;
}