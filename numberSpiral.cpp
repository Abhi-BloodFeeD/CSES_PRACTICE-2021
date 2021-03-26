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
  ll t;cin>>t;
  while(t--){
    ll y;ll x;
    cin>>y>>x;
    ll m = max(x,y);
    ll sol = (m*m)- m +1;
    if(x<m){
      if(m%2==0)//even
        sol=sol+m-x;
      if(m%2!=0)//odd
        sol=sol-m+x;
    }
    else if(y<m){
      if(m%2==0)//even
        sol=sol-m+y;
      if(m%2!=0)//odd
        sol=sol+m-y;
    }
    cout<<sol<<endl;
  }
  
  
  
return 0; 
} 
