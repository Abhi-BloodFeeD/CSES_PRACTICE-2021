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
  //
  ll n;cin>>n;
  vector<pair<ll,ll>>vp;
  for(ll i=0;i<n;i++){
    ll a,d;
    cin>>a>>d;
    vp.push_back({a,d});
  }
  sort(vp.begin(),vp.end());
  ll f=0;ll score=0;
  for(ll i=0;i<n;i++){
    f+=vp[i].first;
    score+=vp[i].second - f;
  }
  cout<<score<<endl;
  
return 0; 
} 
