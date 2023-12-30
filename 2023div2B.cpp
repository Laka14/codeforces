#include <bits/stdc++.h>
using namespace std ;
typedef long long int1 ;
//#define endl
#define pb push_back
#define f(i,k,n) for(int1 i = k;i<n;i++)
#define rf(i,k,n) for(int1 i = k;i>=n;i--)
int1 gcd( int1 a, int1 b) 
{ 
  if (b == 0) 
    return a; 
  return gcd(b, a % b); 
}  
int1 lcm(int1 a, int1 b) 
{ 
    return (a/gcd(a,b))*b;
}
void solve(){
    int1 a;
    int1 b;
    cin >> a >> b;
    int ans =1;
    if(b%a==0) ans = (lcm(a,b))*(lcm(a,b))/a;
    else{
        ans = lcm(a,b);
    }
    cout << ans << endl;

}
                  
int main(){
int1 t=1;
cin>>t;
while(t--){
    solve();
}
return 0;
}