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
  string s,sol="";cin>>s;
  map<char,int>mp;
  for(int i=0;i<s.size();i++){
    mp[s[i]]+=1;
  }
  char codd;
  int odd=0;
  for(auto x:mp){
    if(x.second%2!=0){
      odd++;
      codd=x.first;
    }
    for(int i=0;i<x.second/2;i++){
      sol+=x.first;
    }
  }
  if(odd>1){
    cout<<"NO SOLUTION\n";
    return 0;
  }
  else {
    string ss=sol;
    if(s.size()%2!=0)
      string ss=ss+codd;
    for(int i=sol.size()-1;i>-1;i--){
      ss+=sol[i];
    }
    cout<<ss<<endl;
  }
return 0; 
} 
