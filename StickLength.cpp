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
  for(int i=0;i<n;i++)cin>>a[i];
  if(n==1){
    cout<<a[0]<<endl;
    return 0;
  }
  sort(a,a+n);
  
  ll mid1,mid2;
  if(n%2==0){
    mid1=(n/2)-1;
    mid2=mid1+1;
  }
  else{
    mid1=(n+1)/2-1;
    mid2=mid1;
  }
  ll diff1=0,diff2=0;
  for(int i=0;i<n;i++){
    diff1+=abs(a[i]-a[mid1]);
    diff2+=abs(a[i]-a[mid2]);
  }
  cout<<min(diff1,diff2)<<endl;
return 0; 
} 
