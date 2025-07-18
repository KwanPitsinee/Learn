#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y;
    //build node
    vector<pair< int, int> > node;
    vector<vector<int> > x_graph(1001, vector<int> (0));
    vector<vector<int> > y_graph(1001, vector<int> (0));
    
    cin >> n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        node.push_back({x,y});
        x_graph[x].push_back(i);
        y_graph[y].push_back(i);
    }

    //build graph
    vector<vector<int> > connect(n, vector<int> (0));
    for(int i=0;i<n;i++){
        for(auto temp : x_graph[node[i].first])
        {
            if(temp!=i)
            {
                connect[i].push_back(temp);
            }
        }
        for(auto temp : y_graph[node[i].second])
        {
            if(temp!= i){
                connect[i].push_back(temp);
            }
        }
    }

    //find group of graph
    int group=0;
    vector<bool> check(n, false);
    queue<int> q;
    for(int i=0; i<n; i++)
    {
        if(check[i]==false)
        {
            q.push(i);
            while(!q.empty())
            {
                int node_now= q.front();
                q.pop();
                if(check[node_now]== false)
                {
                    check[node_now]= true;
                    for(auto temp: connect[node_now]) //connect[node_now]=vector<int>   for auto=ไล่intในvector<int>อีกที
                    {
                        q.push(temp);
                    }
                }
            }
            group++;
        }
    }
    cout<<group-1;
}