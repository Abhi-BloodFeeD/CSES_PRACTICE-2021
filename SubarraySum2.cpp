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
  ll n,x;cin>>n>>x;
  ll a[n];
  map<ll,ll>mp;mp[0]=1;
  ll sum=0;ll score=0;
  for(ll i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
    ll tofind=sum-x;
    if(mp.find(tofind)!=mp.end()){
      score+=mp[tofind];
    }
    mp[sum]++;
  }
  cout<<score<<endl;
  
  return 0; 
} 
