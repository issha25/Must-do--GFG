int maxSubarraySum(int arr[], int n){
    int s=0,gs=INT_MIN;
    for(int i=0;i<n;i++){
        s=max(s+arr[i],arr[i]);
        if(s>gs)
            gs=s;
    }  
    
return gs;
}
