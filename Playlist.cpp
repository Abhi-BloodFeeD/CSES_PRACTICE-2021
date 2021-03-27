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
  map<ll,ll>mp;
  ll a[n];
  for(ll i=0;i<n;i++)cin>>a[i];
  ll i=0,j=0,score=0,max_score=INT_MIN;  
  while(i<n && j<n){
    if(mp[a[i]]==0){
      mp[a[i]]=1;
      score++;
      i++;
    }
    else if(mp[a[i]]==1){
      mp[a[i]]--;
      while(a[j]!=a[i]){
        mp[a[j]]--;
        score--;
        j++;
      }
      score--;
      j++;
    }
    max_score=max(max_score,score);     
  }
  cout<<max_score<<endl;
return 0; 
} 
