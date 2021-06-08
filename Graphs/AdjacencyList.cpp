#include<iostream>
#include<bits/stdc++.h>

using namespace std;
vector<int> adjl[100];

int main(){
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }

    for(int i=1;i<n+1;i++){
        cout<<i<<"->";
        for(int j : adjl[i]){
            cout<<" "<<j;
        }
        cout<<endl;
    }
    return 0;
}