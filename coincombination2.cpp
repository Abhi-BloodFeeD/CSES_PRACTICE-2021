#include<bits/stdc++.h>
using namespace std;

#define ll int
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  ll n,x;cin>>n>>x;
  ll c[n+1];
  for(ll i=1;i<=n;i++)cin>>c[i];
  ll dp[n+1][x+1];
  for(ll i=1;i<=n;i++)
  {
    for(ll sum=0;sum<=x;sum++)
    {
      if(sum==0)
        dp[i][sum]=1;
      else
      {
        ll opt1=(c[i]>sum)?0:dp[i][sum-c[i]];
        ll opt2=(i==1)?0:dp[i-1][sum];
        dp[i][sum]=(opt1+opt2)%mod;
      }
    }
  }
  cout<<dp[n][x]<<endl;
  
return 0; 
} 