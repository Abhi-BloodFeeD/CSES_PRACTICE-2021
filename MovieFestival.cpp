#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;
bool comp(pair<int,int> a,pair<int,int> b){
  return a.second==b.second?a.first<b.first:a.second<b.second;
}

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  ll n;cin>>n;
  vector<pair<ll,ll>>v;
  for(int i=0;i<n;i++)
  {
    int x,y;
    cin>>x>>y;
    v.push_back({x,y});
  } 
  sort(v.begin(),v.end(),comp);
  int end=0,start=end+1;
  int cnt=1;
  while(start<n && end<n){
    if(v[start].first<v[end].second){
      start++;
    }
    else if(v[start].first>=v[end].second){
      cnt++;
      end=start;
      start=end+1;
    }
  }
  cout<<cnt<<endl;
return 0; 
} 
