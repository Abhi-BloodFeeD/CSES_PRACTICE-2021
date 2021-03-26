#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;

bool comp(pair<int,int>a,pair<int,int>b){
  return a.second == b.second ? a.first<=b.first : a.second<b.second ; 

}
int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  
  ll n;cin>>n;
  ll enter[n],exit[n];
  for(int i=0;i<n;i++)
    cin>>enter[i]>>exit[i];
  sort(enter,enter+n);  
  sort(exit,exit+n);
  int in=0,out=0;
  int maxin=0;
  int total_in=0;
  while(in<n&&out<n){
    if(enter[in]<exit[out]){
      in++;
      total_in++;
       }
    else if(enter[in]>exit[out]){
      out++;
      total_in--;
    }
    maxin=max(total_in,maxin);    
  }
  cout<<maxin<<endl;
  return 0; 
} 
// 2 3 5 || 4 8 9