#include <bits/stdc++.h>
#define int long long int
using namespace std;
 
 int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int m;
        cin>>m;

        if(s.find('1')==string::npos)
        cout<<s<<"\n";
        else{
            //count 0 between 2 one
            // int count0=0;
            // auto firstfound1=s.find('1');
            // auto secondfound1=s.find('1',firstfound1+1);
            // if(firstfound1!=string::npos && secondfound1!=string::npos)
            // count0=secondfound1-firstfound1;
            int found1=-1;
            for(int i=s.length()-1;i>=0;i--){
                if(s[i]=='1'){
                    found1=i;
                    break;
                }
            }
            int found1ag=-1;
            int count0=0;
            for(int i=found1+1;i<s.length();i++){
                if(s[i]=='1'){
                    found1ag=i;
                    count0+=found1ag-found1;
                }
                

            }


        }
    }
return 0;
}