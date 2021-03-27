#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;
ll ans=0;
int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  ll n,sum=0;cin>>n;
  ll a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
  }
  sort(a,a+n);
  ll b=0,f=0;bool flag=true;
  ll start=1;
  while(flag){
    ll sum=0;
    while(sum<=start){
      sum+=a[f];
      f++;
    }
    while(sum>start){
      sum-=a[b];
      b++;
    }
    if(sum!=start)
      {
        ans=start;
        flag=false;
      }
  }
  cout<<ans<<endl;
return 0; 
} 
