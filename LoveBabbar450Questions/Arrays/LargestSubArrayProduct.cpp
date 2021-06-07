#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int largestProduct(int arr[],int n){
    int res=arr[0];
    for(int i=0;i<n;i++){
        int mul = arr[i];
        for(int j=i+1;j<n;j++){
            mul*=arr[j];
            res = max(res,mul); 
        }
    }
    return res;
}


int main(){
    int arr[] = {1, -2, -3, 0, 7, -8, -2 };
    int n=sizeof(arr)/sizeof(arr[0]);
    int product =  largestProduct(arr,n);
    cout<<"Largest Subarray Product is : "<<product;
    return 0;
}