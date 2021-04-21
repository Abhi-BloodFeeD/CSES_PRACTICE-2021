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
  int n,x;cin>>n>>x;
  int c[n];
  for(int i=0;i<n;i++)cin>>c[i];
  ll dp[x+1]={0};
  dp[0]=1;
  for(int i=1;i<=x;i++){
    for(auto coin:c){
      if(i-coin>=0)dp[i]+=dp[i-coin];
      dp[i]%=mod;
    }
  }
  cout<<dp[x]<<endl;
  
  
  
return 0; 
} 
