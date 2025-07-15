#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<int,int> p;
    vector<int> ans(0);
    int mx=0;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        p[q]++;
        if(p[q]>=mx){
            mx=p[q];
        }
    }
    for(int i=0;i<=10000;i++){
        if(p[i]==mx)
        {
            ans.push_back(i);
        }
    }
    for(auto temp: ans){
        cout<<temp<<' ';
    }

}

//https://programming.in.th/tasks/0033