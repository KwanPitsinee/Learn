//https://drive.google.com/drive/folders/1FcmGDXvymGuhRYGq7qnhTgLMe-DZK7Q9
#include <iostream>
#include <vector>
using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator it,int k) {
 /* 
  *   0 1 2 3 4 5 6 7
  *    3-2=1  3+2=5
  *   0 6 7
  *    
  v1  |0... it-k-1| |it-k ... it+k| |it+k+1 -- n-1| 
 
  */ 
  int j=it-v.begin();
  vector<string>vans;
  for(int i=0;i<=j-k-1;i++){
    vans.push_back(v[i]);
  }
  for(int i=j+k+1;i<=v.size()-1;i++){
    vans.push_back(v[i]);
  }
  
  vector<string> v_erase=v;
  int p=it-v.begin();
  auto i=v_erase.begin()+p;
  auto l=i;
  if(p-k<0) i=v_erase.begin();
  else i=i-k;
  if(p+k>=v.size()-1) l=v_erase.end();
  else l=l+k+1;
  v_erase.erase(i,l);
  
  return v_erase;
}
int main() {
	int n,j,k;
	cin >> n >> j >> k;
	vector<string> v(n);
	for (int i = 0;i < n;i++) {
		cin >> v[i];
	}
	cout << "Result after punch" << endl;
	vector<string> result = punch(v, v.begin() + j, k);
	for (auto &x : result) {
		cout << x << endl;
	}
}