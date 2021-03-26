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
  string s;
  cin>>s;
  int n=s.size();
  int cur=1;
  int global = 1;
  for(int i=1;i<n;i++){
    if(s[i]==s[i-1])cur++;
    else cur=1;
    global = max(global,cur);
  }
  cout<<global<<"\n";

  
return 0; 
} 
