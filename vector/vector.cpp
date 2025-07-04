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

using namespace std;
//https://sourceforge.net/projects/mingw/

int main(){
  int a=15;
  cout<<a<<"\n";     //   15
  cout<<(--a)<<"\n"; //  14
  cout<<a<<"\n";     //  14
  cout<<"\n";
  int b=15;
  cout<<b<<"\n";    //  15
  cout<<(b--)<<"\n"; // 15  
  cout<<b<<"\n";    //  14
  
  cout<<"\n\n";
	vector<int> v;     
  for(int i=0;i<10;i++){
  		int a=rand();
      v.push_back(a);// v.emplace_back(a);
  }
  cout<<"first element of v = "<< *v.begin()<<" or "<< v[0] <<"\n";
  auto x=--v.end();
  cout<<"last element of v = "<< *x <<"\n\n";
  
  cout<<"v before sort\n";
  for(auto e:v){
  	cout<<e<<" ";
  }
  cout<<"\n\n";
  //sort(v.begin(),v.end());
  sort(v.begin()+2 ,v.begin()+7); // ตัวที่ 3->7, index 2->6
  cout<<"v after sort from index 2 to index 6\n";
  for(auto e:v){
  	cout<<e<<" ";
  }
  cout<<"\n";
  
  v.insert(v.begin()+1,10000);// (position, value)   3 5 7
  cout<<"v after insert 10000 at index 1\n";    // 3 10000 5 7
  for(auto e:v){
  	cout<<e<<" ";
  }
  cout<<"\n";
  
  v.erase(v.begin()+2,v.begin()+5);//ตัวที่ 3-->5 , index 2-->4
  cout<<"v after erase element from index 2 to index 4\n";
   for(auto e:v){
  	cout<<e<<" ";
  }
  cout<<"\n";
  
  v.insert(v.begin()+2, 4 ,5000);// (position, times ,value)
  cout<<"v after insert 5000 fromt index 2 to index 5(2+4-1)\n";
  for(auto e:v){
  	cout<<e<<" ";
  }
  cout<<"\n";
  
  vector<int> t{1,2,3,4};
  cout<<"v after insert vector t at index 1\n";
  v.insert(v.begin()+1, t.begin() ,t.end());// (position, vector brging , vector end)
  for(auto e:v){
  	cout<<e<<" ";
  }
  cout<<"\n";
  
  vector<int> s(7,4); // {4,4,4,4,4,4,4}
  cout<<"vector s\n";
  for(auto e:s){
  	cout<<e<<" ";
  }
  cout<<"\n";
  
  vector<int> ss(t.begin()+1,t.begin()+3); //{index1,index2}={2,3}
  cout<<"vector ss\n";
  for(auto e:ss){
  	cout<<e<<" ";
  }
  cout<<"\n";
  
  vector<  vector<int> > k(6,  vector<int>(7,3) ); // s[6][7]
  cout<<"2d vector k\n";
  for(int i=0;i<6;i++){
  	for(int j=0;j<7;j++){
      cout<<k[i][j]<<" ";
    }
    cout<<"\n";
  }
  cout<<"\n\n";
  
  sort(v.begin(),v.end());
  for(auto e:v){
    cout<<e<<' ';
  }
  cout<<'\n';
  // 1 2 3 4 41 5000 5000 5000 5000 10000 15724 19169 24464 26500 26962 29358 
  
  auto l=lower_bound(v.begin(),v.end(),41);// find first index that value >=41
  cout<<"lower bound find first index that value >= 41\n";
  cout<<"found value ="<<(*l)<<"\n";
  cout<<"found at index "<<l-v.begin()<<"\n";
    
	l=lower_bound(v.begin(),v.end(),100);
  cout<<"lower bound find index that value >= 100\n";
  cout<<"found value ="<<(*l)<<"\n";
  cout<<"found at index "<<l-v.begin()<<"\n";  
  
  l=lower_bound(v.begin(),v.end(),5000);
  cout<<"lower bound find index that value >= 5000\n";
  cout<<"found value ="<<(*l)<<"\n";
  cout<<"found at index "<<l-v.begin()<<"\n";  
  
  auto u=upper_bound(v.begin(),v.end(),41);// find first index that value >41
  cout<<"upper bound find first index that value > 41\n";
  cout<<"found value ="<<(*u)<<"\n";
  cout<<"found at index "<<u-v.begin()<<"\n";
    
	u=upper_bound(v.begin(),v.end(),100);
  cout<<"upper bound find index that value > 100\n";
  cout<<"found value ="<<(*u)<<"\n";
  cout<<"found at index "<<u-v.begin()<<"\n";  
  
  u=upper_bound(v.begin(),v.end(),5000);
  cout<<"upper bound find index that value > 5000\n";
  cout<<"found value ="<<(*u)<<"\n";
  cout<<"found at index "<<u-v.begin()<<"\n";  
}
