#include<bits/stdc++.h>
using namespace std;
bitset<6>a,b,c;
int A,B,C;

int main(){
  a=8;
  b=3;
  A=8;
  B=3;
  c=(a&b);
  C=(A&B);
  cout<<a<<' '<<b<<' '<<c<<"\n";
  cout<<A<<' '<<B<<' '<<C<<"\n";
  if(C){
    cout<<"Y";
  }
  else{
    cout<<"N";
  }
  cout<<"\n";
  cout<<(C != 0 ? "YES" : "NO");
  cout<<'\n';
  //---------------------------------------
  bitset<6>d,e,f;
  int D=5;
  int E,F;
  d=5;
  e = d << 1;
  E = D << 1;
  f = d >> 1;
  F = D >> 1;
  cout<<d<<' '<<e<<' '<<f<<'\n';
  cout<<D<<' '<<E<<' '<<F;
}


//   https://www.onlinegdb.com/online_c++_compiler
