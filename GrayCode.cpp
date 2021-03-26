#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  ll n;cin>>n;
  //given length = n;
  string s="";
  for(int i=0;i<n;i++)s+="0";
  
  for(int i=0;i<n;i++){
    cout<<s<<endl;
    for(int j=0;j<n && j!=i ;j++){
      s[j]='1';
      cout<<s<<endl;
    }
    s[i]='1';
  }
  
return 0; 
} 
