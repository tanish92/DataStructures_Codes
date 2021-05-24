#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class LRU{
    
    list<int> q;


    public:
        unordered_map<int,list<int>::iterator> m;
        int cacheSize;
        
        LRU(int n){
            cacheSize=n;
        }

        void insert(int val){
            if(m.find(val)==m.end()){
                if(q.size()==cacheSize){
                    int l=q.back();
                    q.pop_back();
                    m.erase(l);
                }
            }
            else{
                q.erase(m[val]);
            }
            q.push_front(val);
            m[val]=q.begin();
        }

        void display(){
            for(auto i=q.begin();i!=q.end();i++){
                cout<<*i<<" ";
            }
            cout<<endl;
        }


};

int main(){
    LRU ca(4);
    ca.insert(1);
    ca.display();
    ca.insert(2);
    ca.display();
    ca.insert(3);
    ca.display();
    ca.insert(1);
    ca.display();
    ca.insert(4);
    ca.display();
    ca.insert(5);
    ca.display();

}