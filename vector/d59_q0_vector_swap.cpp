//https://drive.google.com/drive/u/0/folders/1FcmGDXvymGuhRYGq7qnhTgLMe-DZK7Q9
#include <iostream>
#include <vector>
using namespace std;


void vector_swap(vector<int> &v1,vector<int> &v2, int start1, int end1, int start2, int end2) {
  // code here
  /*
  v1  |0... s1-1| |s1 ...   e1-1 | |e1 -- n-1| 
  v2  |0... s2-1| |s2 ...   e2-1 | |e2 -- n-1|   
  v1  |0... s1-1| |s2 ...   e2-1 | |e1 -- n-1| 
  v2  |0... s2-1| |s1 ...   e1-1 | |e2 -- n-1| 
  */ 
  //vector<int> v1ans,v2ans;
  vector<int> v1ans(v1.begin(),v.begin()+start1);
  /*
  for(int i=0;i<=start1-1;i++){
   v1ans.push_back(v1[i]);
  }
  */
  v1ans.insert(v1ans.end(),v2.begin()+start2,v2.begin()+end2);
  /*
  for(int i=start2;i<=end2-1;i++){
   v1ans.push_back(v2[i]); 
  }
  */
  v1ans.insert(v1ans.end(),v1.begin()+end1,v1.end());
  /*
  for(int i=end1;i<=v1.size()-1;i++){
    v1ans.push_back(v1[i]);
  }
  */
  vector<int> v2ans;
  for(int j=0;j<=start2-1;j++){
   v2ans.push_back(v2[j]);
  }
  for(int j=start1;j<=end1-1;j++){
   v2ans.push_back(v1[j]); 
  }
  for(int j=end2;j<=v2.size()-1;j++){
   v2ans.push_back(v2[j]);
  }
  v1=v1ans;
  v2=v2ans;
}

int main() {
//read input
	int n,c;
	vector<int>v1,v2;
	cin >> n; //number of v1
	for (int i = 0;i < n;i++) {
		cin >> c;
		v1.push_back(c);
	}
	cin >> n; //number of v2
	for (int i = 0;i < n;i++) {
		cin >> c;
		v2.push_back(c);
	}
	int s1,e1,s2,e2; //position
	cin >> s1 >> e1 >> s2 >> e2;
	//call the function
	vector_swap(v1,v2,s1,e1,s2,e2);
	//display content of the stack
	cout << "v1 has " << v1.size() << endl;
	for (auto &x : v1) { cout << x << " "; }
	cout << endl;
	//display content of the stack
	cout << "v2 has " << v2.size() << endl;
	for (auto &x : v2) { cout << x << " "; }
	cout << endl;
}
