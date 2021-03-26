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
  
  //-1 2  -1 5 8  3 5 7
  ll n;cin>>n;
  ll a[n];
  for(int i=0;i<n;i++)  {
    cin>>a[i];
  }
  ll sum=0,global_max=INT_MIN;
  for(int i=0;i<n;i++){
    sum=max(a[i],sum+a[i]);
    global_max=max(global_max,sum);
  }
  cout<<global_max<<endl;


return 0; 
} 
