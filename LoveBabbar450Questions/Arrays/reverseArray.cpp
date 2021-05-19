void reverse(int arr[]){
    int start = 0;
    int end = arr.size();

    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

}