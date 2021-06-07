#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void arrange(int arr[],int n){
    sort(arr,arr+n);
    int pos;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            pos=i;
            break;
        }
    }
    int i=1;
    while(i<(n-1)){
        if(arr[i]<0){
        int temp=arr[i];
        arr[i]=arr[i+pos];
        arr[i+pos]=temp;
        i=i+2;
        }
        else{
            break;
        }

    }
}


int main(){
    int arr[] = { -5, -2, 5, 2, 4, 7, 1, 8, 0, -8 };
    int n=sizeof(arr)/sizeof(arr[0]);
    arrange(arr,n);
    

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}