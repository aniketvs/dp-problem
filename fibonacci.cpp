#include<bits/stdc++.h>
using namespace std;

int fib(int n,int dp[]){
  if(n==0){
      return 0;
  }
  if(n==1){
      return 1;
  }
  if(dp[n]!=-1){
      return dp[n];
  }
  dp[n]=fib(n-1,dp)+fib(n-2,dp);
return dp[n];
  
}
int main(){
    int n;
    cin>>n;
    int dp[n+1];
    int i;
    for(i=0;i<=n;i++){
     dp[i]=-1;
    }
    int k=fib(n,dp);
    cout<<k;
}