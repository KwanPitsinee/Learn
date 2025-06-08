#include<bits/stdc++.h>
using namespace std;

//vector<int> v[1000001];
map<int,vector<int>> v;

/* 
int a[10000];
map<int,int> a;
string b[1000];
map<int,string> b;
*/
  
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int N,Q;
  cin>>N>>Q;
  for(int i=1;i<=N;i++){
    int  n;
    cin>>n;
    v[n].push_back(i);
  }
  while(Q--){
    int L,R,C;
    cin>>L>>R>>C;
    auto lower=lower_bound(v[C].begin(),v[C].end(),L);
    auto upper=upper_bound(v[C].begin(),v[C].end(),R);
    cout<<upper-lower<<'\n';
  }
}

/*

https://programming.in.th/tasks/codecube_188

1 2 1 2 1 2 3 2 3 3
1 2 3 4 5 6 7 8 9 10
[1] 1 3 5 
[2] 2 4 6 8
[3] 7 9 10
  
l r c  
1 2 1    upper(2)=2 - lower(1)=1   =2-1=1

1 3 1    upper(3)=3 - lower(1)=1   =3-1=2
1 4 2
1 5 2
2 5 4
2 6 3    upper(6)=1 - lower(2)=1   =1-1=0
6 9 0
7 10 3   upper(10)=4 - lower(7)=1   =4-1=3

*/