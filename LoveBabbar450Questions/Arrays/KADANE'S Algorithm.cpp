int KadanesAlgorithm(int arr[], int n){
        int maxSofar=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            if(maxSofar<sum){
                maxSofar=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        // Your code here
        return maxSofar;
    }