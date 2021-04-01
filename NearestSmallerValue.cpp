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
  ll b[n];
  pair<ll,ll> a[n];
  for(ll i=0;i<n;i++){
    ll px;cin>>px;
    a[i]={px,i+1};
  }
  stack<pair<ll,ll>>st;
  for(ll i=0;i<n;i++)
  {
    while(!st.empty() && (st.top().first >= a[i].first))
      st.pop();   
    if(st.empty())
      b[i]=0;
    else 
      b[i] = st.top().second;
    st.push(a[i]);
  } 
  for(auto p:b)cout<<p<<" ";
return 0; 
} 
