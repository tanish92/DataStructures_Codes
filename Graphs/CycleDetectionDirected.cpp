#include<iostream>
#include<bits/stdc++.h>

using namespace std;


bool iscycle(int src,vector<vector<int>> &adj,vector<int> &stack,vector<bool> &vis){
    stack[src] = true;
    if(!vis[src]){
        vis[src]=true;
        for(auto it : adj[src]){
            if(!vis[it] && iscycle(it,adj,stack,vis)){
                return true;
            }
            if(stack[it]){
                return true;
            }
        }
    }
    stack[src]=false;
    return false;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    vector<int> stack(n,0);
    vector<bool> vis(n,false);

    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
    }
    bool cycle=false;
    for(int i=0;i<n;i++){
        if(!vis[i] && iscycle(i,adj,stack,vis)){
            cycle=true;
        }
    }
    if(cycle){
        cout<<"Cycle Found";
    }
    else{
        cout<<"No Cycle Found";
    }
    return 0;
}