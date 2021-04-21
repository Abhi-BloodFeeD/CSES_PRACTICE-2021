#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;
//ll dp[mxN];

void solve(){
  ll noOfBooks,maxTotalPrice;
  cin>>noOfBooks>>maxTotalPrice;
  ll priceBooks[noOfBooks];//h[n]
  ll noOfPagesBooks[noOfBooks];//s[n]
  ll dp[maxTotalPrice+1]={0};//dp[x+1]
  for(int i=0;i<noOfBooks;i++)cin>>priceBooks[i];
  for(int i=0;i<noOfBooks;i++)cin>>noOfPagesBooks[i];
  //maximiseNoOfPagesPurchased;
  for(int i=0;i<noOfBooks;i++)
    for(int money=maxTotalPrice;money>=priceBooks[i];--money) 
        dp[money]=max(dp[money-priceBooks[i]]+noOfPagesBooks[i],dp[money]); 
      
  
  cout<<dp[maxTotalPrice]<<"\n";
}
int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  solve();
  
  
  
return 0; 
} 
