#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;


int main(){ 
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  ll n;cin>>n;
  vector<ll>v; 
  for(ll i=0;i<n;i++){
    ll x;cin>>x;
    auto up = upper_bound(v.begin(),v.end(),x);
    if(up==v.end()){
      v.push_back(x);
    }
    else {
      *up = x;
    }
  }
  cout<<v.size()<<endl;
  
  
  return 0; 
}  
 