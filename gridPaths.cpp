#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;
//11 12 13
//21 22 23
//31 32 33
void solve(){
  ll n;cin>>n;
  ll dp[n][n];
  char grid[n][n];
  
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      cin>>grid[i][j];
   
  
   
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
      if(i==0 && j==0){
        grid[0][0]!='*'?dp[0][0]=1:dp[0][0]=0;
      }
      else if(grid[i][j]!='*'){   
        dp[i][j]=0;
        if(i-1>=0) 
          dp[i][j]+=dp[i-1][j];  
        if(j-1>=0)
          dp[i][j]+=dp[i][j-1];
        dp[i][j]%=mod;
      }
      else dp[i][j]=0;
    }
  cout<<dp[n-1][n-1]<<"\n";
 
  return;
}

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  solve();
return 0; 
} 
