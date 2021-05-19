#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void kthMaxandMin(int arr[],int n,int k){
    sort(arr,arr+n);
    int kMin=arr[k-1];
    int kMax=arr[n-k];

    cout<<"kth Max: "<< kMax<<endl;
    cout<<"kth Min: "<< kMin<<endl;

}

int main(){
    int arr[] = { 7 ,10 ,  4 , 3 , 20 , 15 };
    int k=3;
    int n= sizeof(arr)/sizeof(arr[0]);

    kthMaxandMin(arr,n,k);

    
    return 0;
}