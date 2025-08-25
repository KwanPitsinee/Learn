#include<bits/stdc++.h>
using namespace std;

int main(){
    string st;
    getline(cin,st);
    map<char,int> count;
    set<char> s;
    for(char temp:st){
        if(temp <= 'Z' && temp >= 'A'){
            temp=temp-'A'+'a';
            count[temp]++;
            s.insert(temp);
        }
        else if(temp <= 'z' && temp >= 'a'){
            s.insert(temp);
            count[temp]++;
        }
    }
    for(auto temp:s){
        cout<<temp<<' '<<"-> "<<count[temp]<<'\n';
    }
}