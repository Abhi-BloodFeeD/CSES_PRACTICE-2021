#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e5;
const int mxM = 1e2;
int n,m,a[mxN];
ll dp[mxN][mxM];
int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  cin>>n>>m;
  for(int i=0;i<n;++i){
    cin>>a[i],--a[i];
  }
  for(int i=0;i<n;++i){
    if(i){
      for(int j=0;j<m;++j){
        dp[i][j]=dp[i-1][j];
        if(j)
          dp[i][j]+=dp[i-1][j-1];
        if(j<m-1)
          dp[i][j]+=dp[i-1][j+1];
        dp[j][j]%=mod;
      }
    } else  
      for(int j=0;j<m;++j)
        dp[0][j]=1;
    if(~a[i])//cheching for a[i]!=-1
      for(int j=0;j<m;++j)
        if(j^a[i])
          dp[i][j]=0;
  }

  ll ans=0;
  for(int i=0;i<m;++i)
    ans+=dp[n-1][i];
  cout<<ans%mod;
  
  
return 0; 
} 
