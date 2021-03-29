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
  vector<pair<int,int>>v;
  for(int i=0;i<n;i++){
    ll x,y;
    cin>>x>>y;
    v.push_back({2*x,2*y+1});
  }
  sort(v.begin(),v.end());
  int k=INT_MIN;
  set<pair<int,int>>st;
  st.insert({0,1});
  int room=1;
  vector<int>r;
  
   for(int i=0;i<n;i++){
    if(v[i].first>st.begin()->first){
      st.insert({v[i].second,st.begin()->second});
      r.push_back(st.begin()->second);
      st.erase(st.begin());
    }
    else{
      st.insert({v[i].second,++room});
      r.push_back(room);   
    }
    
    k=max(k,room);

  }
  cout<<k<<endl;
  for(auto X:r)cout<<X<<" ";
  return 0; 
} 
