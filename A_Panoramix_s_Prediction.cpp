#include <bits/stdc++.h>
using namespace std;
 
vector<int>v;
 void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            v.push_back(p);
}
 
 int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    SieveOfEratosthenes(m);

    if(v[v.size()-1]==m && v[v.size()-2]==n)
    cout<<"YES\n";
    else cout<<"NO\n";
return 0;
}