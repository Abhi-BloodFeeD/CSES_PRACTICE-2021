#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int nxm = 1e9;

int solve(ll sum1,ll sum2,ll i,ll *a,ll n){
  if(i==n){
    return abs((sum2-sum1));
  } 
  return abs(min(solve(sum1-a[i],sum2+a[i],i+1,a,n),solve(sum1,sum2,i+1,a,n)));                     
}
int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  ll n;cin>>n;
  ll w[n];
  ll sum1=0;
  for(int i=0;i<n;i++)
  {
    cin>>w[i];
    sum1+=w[i];
  } 
  cout<<solve(sum1,0,0,w,n)<<endl;
  
return 0; 
} 
