#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ll n;cin>>n;
  vector<pair<ll,ll>> v;
  for(int i=1;i<n+1;i++){
    ll x;
    cin>>x;
    v.push_back({x,i});
  }
  sort(v.begin(),v.end());
  ll cnt=1;
  ll beg,end;
  beg=v[0].second;
  for(ll i=1;i<n;i++){
    end=v[i].second;
    if(beg>end){
      cnt++;
    }
    beg=end;
  }cout<<cnt<<endl;  
return 0; 
} 
