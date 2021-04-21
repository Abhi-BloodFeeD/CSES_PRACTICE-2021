#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN=1e7;
const int mod=1e9+7;

ll dp[mxN];
int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  dp[0]=1;
  dp[1]=1;
  int m;cin>>m;
  
  
  for(int n=2;n<mxN;n++)
  {
    
    if(n>=1)
      dp[n]+=dp[n-1];
    if(n>=2)
      dp[n]+=dp[n-2];
    if(n>=3)
      dp[n]+=dp[n-3];
    if(n>=4)
      dp[n]+=dp[n-4];
    if(n>=5)
      dp[n]+=dp[n-5];
    if(n>=6)
      dp[n]+=dp[n-6];
    dp[n]%=mod;
  }

  cout<<dp[m]<<endl;
  
return 0; 
} 
