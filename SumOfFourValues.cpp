#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e8;
const int N = 2e5;

int main(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  ll n,x;cin>>n>>x;
  ll a[n];
  for(ll i=0;i<n;i++)
    cin>>a[i];
  
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      
    }
  }
  
  for(auto m:mp){
    if(mp.find(x-m.first)!=mp.end()){
      result[0]=m.second.first;
      result[1]=m.second.second;
      result[2]=mp[x-m.first].first;
      result[3]=mp[x-m.first].second;
      if(result[0]!=result[2] && 
         result[0]!=result[3] &&
         result[1]!=result[3] && 
         result[1]!=result[2])
        {
          found=true;
          break;
        }
    }
  }
  if(found){
    for(auto so:result)cout<<so+1<<" ";
  }
  else 
    cout<<"IMPOSSIBLE";

  

return 0; 
} 
