#include<iostream>//cin cout
#include<cstdlib>// rand
#include<string>//string
#include<vector>//vector
#include<algorithm>//sort, swap
#include<cmath>//sqrt,floor, round,ceil,pow,log
#include<queue>//queue,priority q
#include<stack>//stack
#include<set>//set,multi set
#include<map>//map



#include<bits/stdc++.h>
using namespace std;

long long int dp[100002],K,N ;

int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  vector <long long int> v;
  cin>>N>>K;
  long long int ans=0;
  for(int j=1;j<=N;j++){
    cin>>dp[j];
    dp[j]=dp[j]+dp[j-1];
  }
  v.push_back(0);
  for(int j=1;j<=N;j++){
    long long int want=dp[j]-K;
    int u=upper_bound(v.begin(),v.end(),want)-v.begin();
    ans+=u;
    auto i=upper_bound(v.begin(),v.end(),dp[j]);
    v.insert(i,dp[j]);
  }
  cout<<ans;
}