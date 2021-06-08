#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool iscycle(int src,vector<vector<int>> &adjl,vector<bool> &vis,int parent){
    vis[src]=true;
    for(auto i :adjl[src]){
        if(i!=parent){
            if(vis[i]){
                return true;
            }
            if(!vis[i] && iscycle(i,adjl,vis,src)){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adjl(n);
    vector<bool> vis(n,false);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }
    bool cycle=false;
    for(int i=0;i<n;i++){
        if(!vis[i] && iscycle(i,adjl,vis,-1)){
            cycle=true;
        }
    }
    if(cycle){
        cout<<"Cycle is present";
    }
    else{
        cout<<"No cycle is present";
    }
    return 0; 
}