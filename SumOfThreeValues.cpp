#include<bits/stdc++.h>
using namespace std;

#define ll long long

map<ll,vector<ll>>mp;
int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  ll n,x;cin>>n>>x;
  ll a[n];
  for(ll i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]].push_back(i);
  }
  bool printed=false;
  for(ll i=0;i<n-1;i++){
    for(ll j=i+1;j<n;j++)
    {
      ll sum = a[i]+a[j];      
      if(mp.find(x-sum)!=mp.end()){
      for(auto p:mp[x-sum]){
        if(p!=i && p!=j)
        {
          cout<<i+1<<" "<<j+1<<" "<<p+1<<endl;
          printed=true;
          break; 
        }
      }
    }
    if(printed)break;
  }
  if(printed)break;
  }
  if(!printed)cout<<"IMPOSSIBLE\n";
return 0; 
} 
