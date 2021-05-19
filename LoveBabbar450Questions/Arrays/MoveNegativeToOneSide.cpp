#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void moveNegativeOneSide(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        if(arr[start]>0 && arr[end]>0){
            end--;
        }
        else if(arr[start]>0 && arr[end]<0){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }

        else if(arr[start]<0 && arr[end]<0){
            start++;
        }
        else{
            start++;
            end--;
        }
    }
}

int main(){
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, 11};
    int n= sizeof(arr)/sizeof(arr[0]);
    moveNegativeOneSide(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}