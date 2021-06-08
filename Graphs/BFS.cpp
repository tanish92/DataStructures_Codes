#include<iostream>
#include<bits/stdc++.h>

using namespace std;
const int N= 1e5+2;
bool vis[N];
vector<int> adjl[N];
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

    queue<int> q;
    q.push(1);
    vis[1]=true;
    while (!q.empty())
    {
       int x= q.front();
       q.pop();
       cout<<x<<" ";
       for(int i : adjl[x]){
           if(!vis[i]){
               vis[i]=true;
               q.push(i);
           }
       }
    }
    
    return 0;

}