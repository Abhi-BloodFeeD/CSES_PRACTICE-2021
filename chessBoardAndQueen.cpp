#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;
ll score=0;

//..WILL IMPLEMENT IT USING BACK TRACKING ALGORITHM..//
void solve(char a[8][8],int row){

  if(row==8){
    score+=1;
    return;
  }
  char asup[8][8];
  for(int col=0;col<8;col++){
    if(a[row][col]== '.'){
      //cout<<row<<" queen-Placed-At "<<row<<"-"<<col<<endl;
      for(int i=0;i<8;i++)
        for(int j=0;j<8;j++){
          if((i+j)==(row+col)||(i-j)==(row-col))
              asup[i][j]='*';
          else if(i==row||j==col)
              asup[i][j]='*';  
          else 
              asup[i][j] = a[i][j];
        }
      solve(asup,row+1);
    } 
  }
  return;
}

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  char a[8][8];
  for(int i=0;i<8;i++)
    for(int j=0;j<8;j++)
    {
      cin>>a[i][j];
    }
  solve(a,0);
  cout<<score<<endl;
  
return 0; 
} 
