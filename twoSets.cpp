#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  // 1 2 3 4 5 6 7 8 ;
  
  ll n;
  cin>>n;
  if(n%4!=0){cout<<"NO";return 0;}
  
  ll req=n*(n+1)/4;
  ll cur=0;
  vector<ll>v1;
  vector<ll>v2;
  for(ll i=n;i>0;i--){ 
    if(cur+i<=req){
      cur+=i;
      v1.pb(i);
    }
    else{
      v2.pb(i);
    }
  }
  if(cur != req){
    cout<<"NO";
    return 0;
  }
  
  cout<<"YES"<<endl;
  cout<<v1.size()<<endl;
  for(auto x:v1)cout<<x<<" ";
  cout<<endl;
  
  cout<<v2.size()<<endl;
  for(auto x:v2)cout<<x<<" ";
  cout<<endl;
return 0; 
} 
