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
  ll n;cin>>n;
  ll t[n];ll sum=0;
  for(ll i=0;i<n;i++){
    cin>>t[i];
    sum+=t[i];
  } 
  sort(t,t+n,greater<ll>());
  cout<<max(sum,2*t[0]);  
  

  
return 0; 
} 
