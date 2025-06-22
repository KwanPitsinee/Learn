#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int interval_count(int l,int r,vector<int>vn){
  auto U=upper_bound(vn.begin(),vn.end(),r);
  auto L=lower_bound(vn.begin(),vn.end(),l);
  int ans=U-L;
  return ans;
}

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n,m,k;
  cin>>n>>m>>k;
  vector<int>vn;
  for(int i=1;i<=n;i++){
    int j;
    cin>>j;
    vn.push_back(j);
  }
  sort(vn.begin(),vn.end()); 
  for(int i=1;i<=m;i++){
    int q;
    cin>>q;
    int l=q-k;
    int r=q+k;
    cout<<interval_count(l,r,vn)<<' ';
  }
}
/*
index 0 1 2 3 4 5 6 7 8 9 10 11 12 13
      1 2 3 4 4 4 5 5 6 7 8  9   9  9  10
  upper_bound(7)คือindexตัวแรกที่มีค่ามากกว่า7 หรือจะได้ว่าจำนวนตัวที่น้อยกว่าหรือเท่ากับ7มี10ตัว
  lower_bound(7)คือndexตัวแรกที่มีค่ามากกว่าหือเท่ากับ7 หรือจะได้ว่าจำนวนตัวที่น้อยกว่า7มี9ตัว
*/