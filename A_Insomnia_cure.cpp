// #include <bits/stdc++.h>
// using namespace std;
 
//  int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int k,l,m,n;
//     long long d;
//     cin>>k>>l>>m>>n>>d;
    
//     bool a[d+1];
//     memset(a, true, sizeof(a));
//     if(k>d || l>d || m>d ||n>d)
//     cout<<"0\n";

//     else{
//       for(int i=k;i<=d;i=i+k)
//     a[i]=false;

//     for(int i=l;i<=d;i=i+l)
//     a[i]=false;
    
//     for(int i=m;i<=d;i=i+m)
//     a[i]=false;
    
//     for(int i=n;i<=d;i=i+n)
//     a[i]=false;
    
//     int count=0;
//     for(int i=0;i<d;i++)
//     if(a[i])
//     count++;

//     cout<<d-count+1;
//     }
    
    
// return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
//  int countDivisibles(int B, int M)
// {
   
//     // Add 1 explicitly as A is divisible by M
//     // if (A % M == 0)
//     //     return (B / M) - (A / M) + 1;
 
//     // A is not divisible by M
//     return (B / M) - (1/ M);
// }
//  int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     long long k,l,m,n,d;
//     cin>>k>>l>>m>>n>>d;

//     cout<<countDivisibles(d,k)+countDivisibles(d,l)+countDivisibles(d,m)+countDivisibles(d,n)<<"\n";
// return 0;
// }

#include <bits/stdc++.h>
using namespace std;
 
 int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k,l,m,n;
    long long d;
    cin>>k>>l>>m>>n>>d;
    int count=0;
    for(int i=1;i<=d;i++){
       if(i%k==0||i%l==0||i%m==0||i%n==0)
       count++;
    }
    cout<<count;
return 0;
}