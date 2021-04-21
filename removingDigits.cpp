#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;

int maxDigit(ll number){
 ll numbMax=-1;
 while(number>0){
   int lastDigit = number%10;
   numbMax = max(numbMax,(ll)lastDigit);
   number/=10;
 }
 return numbMax;
}
void solve(){
ll n;cin>>n;
ll dp[n+1];
dp[0]=0;
for(int i=1;i<=n;i++){
  dp[i]=dp[i-maxDigit(i)]+1;
}
cout<<dp[n]<<'\n';
}

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  solve();   

  
return 0; 
} 
