#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;

  
  string longestPalindrome(string s) {
    int n=s.size();
    int dp[n][n];
    int start=0;
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++)
      dp[i][i]=1;  

    ll maxlen=1;
    for(int i=0;i<n-1;i++)
        if(s[i]==s[i+1]){
          dp[i][i+1]==1;
          maxlen=2;
          start=i;
        }
    for(int k=3;k<=n;k++)
      for(int i=0;i<n-k+1;i++){ 
        if(dp[i+1][i+k-2] && s[i]==s[i+k-1]){ 
          dp[i][i+k-1]=1;
          if(k>maxlen){
            start=i;
            maxlen=k;
          }
        }
      }
    string sol="";
    for(int i=start;i<start+maxlen;i++)
    sol+=s[i];
    return sol;  
    }
  
int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  string s;
  cin>>s;
  cout<<longestPalindrome(s)<<endl;
return 0; 
}