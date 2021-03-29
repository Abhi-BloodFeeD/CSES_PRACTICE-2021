#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;cin>>n;
  for(int i=2;i<=n;i+=2){
    cout<<i<<" ";
  }
  set<int>s;
  for(int i=1;i<n;i+=2){
    s.insert(i);
  }  
  
  return 0; 
} 
