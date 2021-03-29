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
  ll x,n;cin>>x>>n;
  map<ll,ll>mp;
  set<ll>st;
  st.insert(0);
  st.insert(x);
  mp[x]=1;
  for(int i=0;i<n;i++){
    ll a;
    cin>>a;
    auto it = st.lower_bound(a);
    auto lt = it;lt--;
    ++mp[(*it)-a];
    ++mp[a-(*lt)];
    mp[(*it)-(*lt)]--;
    if(mp[(*it)-(*lt)]==0)
      mp.erase((*it)-(*lt));
    st.insert(a);
    cout<<(--mp.end())->first<<" ";
  }

  return 0; 
} 
