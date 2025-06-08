#include<bits/stdc++.h>
using namespace std;

//int count[string];
map<string,int>cnt;
  
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int N;
  cin>>N;
  int mx=0;
  string ans;
  for(int i=1;i<=N;i++){
    string str;
    cin>>str;
    cnt[str]++;
    if(cnt[str]>mx){
      mx=cnt[str];
      ans=str;
    }
    else if(cnt[str]==mx){
      if(str>ans){
        ans=str;
      }
    }
  }
  cout<<ans<<' '<<mx;
}
//https://drive.google.com/drive/folders/1ooiWJXNFV9U_zgBY1DxCCWC3m1hLAW-Z