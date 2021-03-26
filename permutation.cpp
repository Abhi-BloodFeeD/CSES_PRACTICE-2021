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
  ll n ;cin>>n;
  if(n==1)cout<<1<<endl;
  else if(n==2 || n==3)cout<<"NO SOLUTION"<<endl;
  else {
    for(ll i=2;i<=n;i+=2)cout<<i<<" ";
    for(ll i=1;i<=n;i+=2)cout<<i<<" ";
  }
  
  
return 0; 
} 
