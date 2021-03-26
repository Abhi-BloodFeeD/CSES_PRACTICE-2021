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
  ll n ,m ;cin>>n>>m;
  ll limit[m];
  multiset<ll>mt;
  for(int i=0;i<n;i++)
    {
      ll x;
      cin>>x;
      mt.insert(x); 
    }  
  for(int i=0;i<m;i++){ 
    ll x;
    cin>>x;
    auto it = mt.upper_bound(x);
    if(it!=mt.begin()){
      --it;
      cout<<*it<<endl;
      mt.erase(mt.find(*it));
    }
    else 
      cout<<-1<<endl;
  }


return 0; 
} 
