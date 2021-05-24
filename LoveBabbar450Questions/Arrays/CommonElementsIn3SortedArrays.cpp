#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findCommon(int arr1[],int arr2[],int arr3[],int n1,int n2,int n3){
    int i,j,k;
    i=j=k=0;
    int prev1,prev2,prev3;
    prev1=prev2=prev3=INT_MIN;
    while(i<n1&&j<n2&&k<n3){
        while(arr1[i]==prev1 && i<n1){
            i++;
        }
        while(arr2[j]==prev2 && j<n2){
            j++;
        }
        while(arr3[k]==prev3 && k<n3){
            k++;
        }

        if(arr1[i]==arr2[j]&&arr2[j]==arr3[k]){
            cout<<arr1[i]<<" ";
            prev1=arr1[i];
            prev2=arr2[j];
            prev3=arr3[k];
            i++;
            j++;
            k++;
        }
        else if(arr1[i]<arr2[j]){
            prev1=arr1[i];
            i++;
        
        }
        else if(arr2[j]<arr3[k]){
            prev2=arr2[j];
            j++;
        
        }
        else{
            prev3=arr3[k];
            k++;
        }
    }
}

int main()
{
    int ar1[] = { 1, 5, 10, 20, 40, 80, 80 };
    int ar2[] = { 6, 7, 20, 80, 80, 100 };
    int ar3[] = { 3, 4, 15, 20, 30, 70, 80, 80, 120 };
    int n1 = sizeof(ar1) / sizeof(ar1[0]);
    int n2 = sizeof(ar2) / sizeof(ar2[0]);
    int n3 = sizeof(ar3) / sizeof(ar3[0]);
 
    cout << "Common Elements are ";
    findCommon(ar1, ar2, ar3, n1, n2, n3);
    return 0;
}