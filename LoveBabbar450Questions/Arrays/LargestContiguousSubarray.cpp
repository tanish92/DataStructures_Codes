#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int maxSubArraySum(int a[],int n){
    int dp[n]={ 0 };
    dp[0]=a[0];
    int maxi = a[0];

    for(int i=1;i<n;i++){
        dp[i] = max(dp[i-1]+a[i],a[i]);
        maxi = max(dp[i],maxi);
    }
    
    return maxi;

}

int main(){
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    
    return 0;
}