#include <bits/stdc++.h>
using namespace std ;
typedef long long int1 ;
#define pb push_back
#define f(i,k,n) for(int1 i = k;i<n;i++)
#define rf(i,k,n) for(int1 i = k;i>=n;i--)
void solve(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> v(n);
    f(i,0,n) cin >> v[i];
    int prod=1;
    f(i,0,n) prod=prod*v[i];
    if(2023%prod==0) {
        cout << "YES" << endl;
        if(k==1){
            cout << 2023/prod << endl;
        }
        else{
            prod = 2023/prod;
            cout << prod <<" ";
            while(k>1){
                k--;
                cout << 1 << " ";
            }
            cout << endl;
        }
        
    }
    else{
        cout <<"NO" << endl;
    }

}
                  
int main(){
int1 t=1;
cin>>t;
while(t--){
    solve();
}
return 0;
}