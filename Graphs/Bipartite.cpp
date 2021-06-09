#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> adj;
vector<int> color;
vector<bool> vis;
bool bipartite=false;

void isbipartite(int n,int curr){
    if(color[n]!=-1&&color[n]!=curr){
        bipartite=false;
        return;
    }
    color[n]=curr;
    if(vis[n]){
        return;
    }
    
     vis[n]=true;
     for(auto i:adj[n]){
        isbipartite(n,curr xor 1);
            
    }

}

int main(){

    int n,m;
    cin>>n>>m;

    adj = vector<vector<int>> (n);
    color = vector<int> (n,-1);
    vis = vector<bool> (n,false);

    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for(int i=0;i<n;i++){
        if(!vis[i]){
            isbipartite(i,0);
        }
    }

    if(bipartite){
        cout<<"Graph is Bipartite";
    }
    else{
        cout<<"Graph is not Bipartite";
    }

    return 0;
}