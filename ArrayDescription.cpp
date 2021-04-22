#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e2;
const int N = 1e5;
ll dp[N+2][mxN+2];

int solve(){
  int n,m;cin>>n>>m;
  ll x[n+1];
  for(int i=1;i<=n;i++)cin>>x[i];
  
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=m;j++){
      if(i==1){
        if(x[i]==0||x[i]==j)
          dp[i][j]=1;
        else  
          dp[i][j]=0;
      }    
      else{
        if(x[i]==0 || x[i]==j)
          dp[i][j]=((dp[i-1][j]+dp[i-1][j-1])%mod+dp[i-1][j+1])%mod;
        else   
          dp[i][j]=0;
      }
    }
  }
  ll ans=0;
  for(int i=1;i<=m;i++)
    ans+=dp[n][i]%mod;
  return ans%mod;
}

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  cout<<solve()<<"\n";
return 0; 
} 
