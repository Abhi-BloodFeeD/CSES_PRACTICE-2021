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
  ll n,m,k;cin>>n>>m>>k;
  ll a[n];
  for(ll i=0;i<n;i++)  
    cin>>a[i];
  ll b[m];bool c[m]={false};
  for(ll i=0;i<m;i++)  
    cin>>b[i];
  sort(b,b+m);
  sort(a,a+n);
  int i=0;int j=0;int score=0;
  while(i<n){
    if(b[j]>=a[i]-k && b[j]<=a[i]+k){
      i++;
      j++;
      score++;
    } 
     if(b[j]<a[i]-k){
      j++;
    }
    if(b[j]>a[i]+k){
      i++;
    }
  }
  cout<<score<<endl;
return 0; 
} 
