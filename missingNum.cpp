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
  ll sum=0;
  for(int i=0;i<n-1;i++)
  {
    ll x;
    cin>>x;
    sum+=x;  
  }
  cout<<(n*(n+1)/2)-sum;
return 0; 
} 
