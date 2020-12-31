int kthSmallest(int arr[], int l, int r, int k) {
    
    sort(arr,arr+r+1);
    int res=arr[k-1];
    return res;
    //code here
}
