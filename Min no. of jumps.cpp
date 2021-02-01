int minJumps(int arr[], int n){
    int end=0,jumps=0,far=0;
    for(int i=0; i<n ;i++){
        far=max(far,i+arr[i]);     //from each idx how far can you reach.
        if(far>=n-1)
            return jumps+1;
        
        if(i==far)                //you can not move ahead.
            return -1;
        
        if(end==i){               //the best way to reach farthest index gets incremented at that very index.
            jumps++;
            end=far;
        }
    }
    return jumps;
    // Your code here
}
