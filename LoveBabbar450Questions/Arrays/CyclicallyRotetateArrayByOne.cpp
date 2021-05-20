#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void rotateArray(int arr[],int k,int n){
    for(int i=0;i<k;i++){
        int temp=arr[n-1];
        for(int j=n-1;j>0;j--){
            arr[j]=arr[j-1];
        }

        arr[0]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[] = { 7 ,10 ,  4 , 3 , 20 , 15 };
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    rotateArray(arr,k,n);
    
    return 0;
}