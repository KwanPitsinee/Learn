#include<bits/stdc++.h>
using namespace std;

struct student{
  string first_name;
  string last_name;
  int ID;
  int score;
};

int main(){
  student a;
  a.first_name="Pitsinee";
  a.last_name="Nakluan";
  a.ID=19;
  a.score=99;
  a.score+=5;
  
  student b;
  b.first_name="Paksarun";
  b.last_name="Klinsuwan";
  b.ID=20;
  b.score=95;
  
  
  vector<student>sws_student;
  sws_student.push_back(a);
  sws_student.push_back(b);
  sws_student.push_back({"Visun","Nakluan",25,100});
  sws_student.push_back({"Noppawan","Nakluan",30});
  
  for(auto e:sws_student){
    cout<<e.ID<<": "<<e.first_name<<' '<<e.last_name<<" get score = "<<e.score<<'\n';
 }
}


//   https://www.onlinegdb.com/online_c++_compiler