#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;
bool cmp(pair<ll,ll>a,pair<ll,ll>b){
  return a.first<b.first;
}
int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  ll n,x;cin>>n>>x;
  vector<pair<ll,ll>>a;  
  for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    a.push_back({x,i+1});
  }
  sort(a.begin(),a.end(),cmp);
  //for(auto i:a)cout<<i.first<<"-"<<i.second<<endl;
  int s=0,e=n-1;
  while(s<e){
    if(a[s].first+a[e].first==x){
      cout<<min(a[s].second,a[e].second)<<" "<<max(a[s].second,a[e].second)<<endl;
      return 0;
    }
    else if(a[s].first+a[e].first>x){
      e--;
    }
    else if(a[s].first+a[e].first<x){
      s++;
    }
  }
  cout<<"IMPOSSIBLE\n";
return 0; 
} 
