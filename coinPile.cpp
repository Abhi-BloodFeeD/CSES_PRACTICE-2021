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
  int t;cin>>t;
  while(t--)  
  {
    ll a,b;
    bool flag=false;
    cin>>a>>b;
    if(b>a)swap(a,b);
    
    if(a>2*b){
      cout<<"NO\n";
    }
    else if((a-2*b)%3==0){
      cout<<"YES\n";
    }
    else{
      cout<<"NO\n";
    } 
  }
  
return 0; 
} 
