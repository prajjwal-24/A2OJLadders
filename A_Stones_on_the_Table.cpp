#include <bits/stdc++.h>
#define int long long int
using namespace std;
 
int32_t main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    char ch=s[0];
    
    for(int i=1;i<s.length();i++){
        if(s[i]==ch)
        {
            count++;
        }
        ch=s[i];
    }
    cout<<count<<"\n";
	return 0;
}