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
  int n;cin>>n;
  set<int>st;
  for(int i=0;i<n;i++)
    {
      ll x;cin>>x;
      st.insert(x);
    }
  cout<<st.size();
  
return 0; 
} 
