#include<bits/stdc++.h>
using namespace std;

int main(){
  map<string,vector<string>> m;
  vector<string> v; 
  string st;
  string start;
  set<string> ans; //setจะไม่เก็บตัวซ้ำ และ จะเรียงข้อมูลให้
  while(cin>> st){
    v.push_back(st);
  }
  start= v.back();
  v.pop_back();
  for(int i=0;i<v.size();i+=2){
      m[v[i]].push_back(v[i+1]);
      m[v[i+1]].push_back(v[i]);
  }
  for(auto temp_1: m[start]){
    for(auto temp_2: m[temp_1]){
      ans.insert(temp_1);
      ans.insert(temp_2);
    }
  }
  ans.insert(start);
  for(auto temp: ans){
    cout<<temp<<'\n';
  }
}