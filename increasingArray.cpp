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
  ll a[n];
  for(ll i=0;i<n;i++)cin>>a[i];
  ll score=0;
  ll mx= a[0];
  for(ll i=1;i<n;i++){
    if(a[i]>mx){
      mx=a[i];
    }
    else {
      score+=mx-a[i];
      a[i]=mx;
    }
  }
  cout<<score<<endl;
return 0; 
} 
