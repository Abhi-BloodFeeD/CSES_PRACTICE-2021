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
  ll n,x;cin>>n>>x;
  //No of childern = n;
  //Max Weight Allowed = x;
  ll a[n];
  for(int i=0;i<n;i++)cin>>a[i];
  sort(a,a+n);
  //5 7 8 8 8 8 9 9 10 10//
  int i=0,j=n-1,cnt=0;
  while(i<=j){
    if(a[i]+a[j]<=x){
      i++;
      j--;
    }
    else if(a[i]+a[j]>x){
      j--;
    }
    cnt++;
  }
   
   
  cout<<cnt<<endl;
  
return 0; 
} 
