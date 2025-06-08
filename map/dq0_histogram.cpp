#include<bits/stdc++.h>
using namespace std;

//int count[string];
map<string,int>cnt;
  
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int N;
  cin>>N;
  for(int i=1;i<=N;i++){
    string str;
    cin>>str;
    cnt[str]++;
  }
  for(auto &e:cnt){
    if(e.second>1){
      cout << e.first << " " << e.second << "\n";
    } 
  }
}
//https://drive.google.com/drive/folders/1ooiWJXNFV9U_zgBY1DxCCWC3m1hLAW-Z