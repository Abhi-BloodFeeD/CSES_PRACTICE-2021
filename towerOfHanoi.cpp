#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;



void towerOfHanoi(int n, int A,
                    int B,int C,vector<pair<int,int>>&v)
{
    if (n == 1)
    {
        v.pb({A,B});
        return;
    }
    towerOfHanoi(n - 1, A, C,B,v);
    v.pb({A,B});
    towerOfHanoi(n - 1, C, B, A,v);
    return;
}

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int n;cin>>n;
  //left//middle//right;
  vector<pair<int,int>>step;
  towerOfHanoi(n,1,3,2,step);
  cout<<step.size()<<endl;
  for(auto x:step){
    cout<<x.first<<" "<<x.second<<"\n";
  }
return 0; 
} 
