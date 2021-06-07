#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool sum (int arr[],int n){
    unordered_set<int> s;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];

        if(sum==0||s.find(sum)!=s.end()){
            return true;
        }
        s.insert(sum);
    }
    return false;
}


int main(){
    int arr[] = { -3, 3, 3, 1, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool t = sum(arr,n);
    if(t){
        cout<<"Subarray found";
    }
    else{
        cout<<"No Subarray found";
    }
    
    return 0;
}