#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include <utility>
#include<unordered_map>
#include<cmath>
#include<set>
#include<climits>
#include<queue>
#include<iomanip>
#include<numeric>
using namespace std ;
typedef long long int1 ;
//#define endl
#define pb push_back
#define f(i,k,n) for(int1 i = k;i<n;i++)
#define rf(i,k,n) for(int1 i = k;i>=n;i--)
#define vec vector<int1> 
#define vecp vector<pair<int1,int1>>
#define inn(v) for(auto &x : v) cin>>x;
#define out(v) for(auto &x:v) cout<<x<<' ';
#define yup cout<<YES<<endl;
#define nope cout<<NO<<endl;
#define all(v) v.begin(), v.end()
int1 gcd(int1 x,int1 y){if(y==0){return x;}return gcd(y,x%y);}
int1 lcm(int1 a, int1 b) {return (a * b) / gcd(a, b);}
bool comp(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}
/*** disjoint set ****/
int1 find_parent(int1 v,vector<int1>& parent){
        if(v == parent[v])return v;
        return parent[v]=find_parent(parent[v],parent);
       }
// to connect node and update their main parent on basis of size
void make_set(int1 u,int1 v ,vector<int1>& parent,vector<int1>& size )
{
           int1 up = find_parent(u,parent);
int1 vp = find_parent(v,parent);
          if(size[up]<size[vp]){
               parent[up]=vp; size[vp] += size[up];
           }
           else{
               parent[vp]=up;size[up] += size[vp];
          }
       }
/*** disjoint set ****/ 
constexpr int mod = 1000000007;
void print(int arr[], int n){
    for(int i =0; i<n; i++){
        cout << arr[i] << " ";
    }
}
void solve(){
    int n;
    int k;
    cin >> n >> k;
    int arr[n] = {0};
    for(int i =0; i<n; i++){
        arr[i] = i+1;
    }
    if(k==n-1){
        cout<<endl;
        for(int i =0; i<n; i++){
            cout << arr[i] << ' ';
        }
        
    }
    else if(k==0){
        reverse(arr, arr + n);
        cout<<endl;
        for(int i =0; i<n; i++){
            cout << arr[i] << ' ';
        }
    }
    else{
        reverse(arr, arr + n-k);
        cout<<endl;
        for(int i =0; i<n; i++){
            cout << arr[i] << ' ';
        }
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