#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e7;
const int N = 2e5;
int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n,x;cin>>n>>x;
  int c[n];
  for(int i=0;i<n;i++)cin>>c[i];
  ll dp[x+1];
  for(int i=1;i<=x;i++)dp[i]=INT_MAX;
  dp[0]=0;
  for(int m=1;m<=x;m++){
    for(int i=0;i<n;i++){
      if(m>=c[i])
        dp[m]=min(dp[m],dp[m-c[i]]+1);
    }  
  }
  if(dp[x]==INT_MAX)
    cout<<-1<<endl;
  else
   cout<<dp[x]<<endl;
return 0; 
} 
