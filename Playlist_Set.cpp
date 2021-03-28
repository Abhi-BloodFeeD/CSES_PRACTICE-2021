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
  ll a[n];
  for(ll i=0;i<n;i++)cin>>a[i];
  map<ll,ll>mp;
  ll score=INT_MIN;
  for(ll i=0,j=0;i<n;i++){
    while(j<n && mp[a[j]]<1){
      mp[a[j]]++;
      j++;
    }
    mp[a[i]]--;
    score=max(score,j-i);
  }
  cout<<score<<endl;

return 0; 
} 
