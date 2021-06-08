#include<iostream>
#include<bits/stdc++.h>

using namespace std;

const int N=1e5+2;
vector<int> adjl[N];
bool vis[N];

void dfs(int node){
    vis[node]=true;
    cout<<node;
    for(int i:adjl[node]){
        if(!vis[i]){
            dfs(i);
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    memset(vis,0,sizeof(vis));

    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }

    dfs(1);

    return 0;
}