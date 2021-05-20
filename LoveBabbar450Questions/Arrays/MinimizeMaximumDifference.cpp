#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int miniMaxDiff(int arr[],int k,int n){
    sort(arr,arr+n);
    int diff = arr[n-1]-arr[0];
    int maxelement,minelement;

    for(int i=1;i<=n-1;i++){
        if(arr[i]>=k){

            maxelement = max(arr[i-1]+k , arr[n-1]-k);
            minelement = min(arr[0]+k,arr[i]-k);
            diff = min(diff,maxelement-minelement);
        }
    }

    return diff;

}

int main(){
    int k = 3;
    int n=4;
    int arr[n]={1, 5, 15, 10};

    int diff= miniMaxDiff(arr,k,n);

    cout<<"Maximum difference is "<<diff<<endl;
    
    return 0;
}