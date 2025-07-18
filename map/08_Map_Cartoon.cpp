#include<bits/stdc++.h>
using namespace std;

int main(){
    int cnt=0;
    map<string,vector<string>> m;
    vector<string> b_order;
    string f,b;
    while(cin>>f>>b){
        if(m.find(b) == m.end()){
            b_order.push_back(b);
        }
        m[b].push_back(f);
    }
    /*
    for(auto temp:m){
        cout<< temp.first<<":";
        // e.second คือ  vector<string>
        for(auto i:temp.second){
            cout<<i<<' ';
        }
        cout<<'\n';
    }
    */
    for (auto p : b_order){
        cout << p << ":";
        for( auto i: m[p]){
            cout<<" "<<i;
        }
        cout<<'\n';
    }
}
