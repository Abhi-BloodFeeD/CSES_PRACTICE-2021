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
  
  //20! = [20/5]+[20/(5^2)]  
  ll n ;cin>>n;
  ll score=0;
  while(n){
    score+=n/5;
    n/=5;
  }
  cout<<score<<endl;
return 0; 
} 
