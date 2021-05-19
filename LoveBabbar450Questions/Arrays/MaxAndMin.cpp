#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void maxAndMin(int arr[],int n){
    int maximum = INT_MIN;
    int minimum = INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]>maximum){
            maximum=arr[i];
        }

        if(arr[i]<minimum){
            minimum = arr[i];
        }
    }

    cout<<maximum<<endl<<minimum;

}

int main(){
    int arr[] = { 1000, 11, 445,1, 330, 3000 };
    int n= sizeof(arr)/sizeof(arr[0]);

    maxAndMin(arr,n);
    return 0;
}