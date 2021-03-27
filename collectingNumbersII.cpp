#include<bits/stdc++.h>
using namespace std;


#define ar array
#define ll long long

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;

int search(vector<pair<int,int>> vp,int n){
  int cnt=1;
  for(int i=1;i<n;i++){
    if(vp[i].second<vp[i-1].second)
      cnt++;
  }  
  return cnt;
}
int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n,m;cin>>n>>m;
  
  
return 0; 
} 
