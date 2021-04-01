#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  ll n,x;cin>>n>>x;  
  //2 1 4 9 7
  map<ll,ll>mp;
  mp[0]=0;
  ll score=0;
  ll sum=0;
  for(ll i=0;i<n;i++){
    ll tt;
    cin>>tt;
    sum+=tt;
    mp[sum]++;
    ll pp = sum-x;
    if(mp.find(pp)!=mp.end()){
      score++;
    }
  }
  cout<<score<<endl;

  
return 0; 
} 
