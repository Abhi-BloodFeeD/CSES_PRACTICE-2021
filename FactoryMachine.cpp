#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;


int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  ll n;ll t;cin>>n>>t;
  ll k[n];
  for(ll i=0;i<n;i++){
    cin>>k[i];
  }
  ll s=0;
  ll e=1e18;
  ll ans=0;
  while(s<=e){
    ll mid=(s+e)/2;
    ll sum=0;
    for(ll p=0;p<n;p++)
    {
      sum+=mid/k[p];
      if(sum>t)break;
    }
    if(sum>=t){
      ans=mid;
      e=mid-1;
    }
    else {
      s=mid+1;
    }
  }
  cout<<ans<<"\n";
return 0; 
} 
