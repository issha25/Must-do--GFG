class Solution {
	public:
		int AlternatingaMaxLength(vector<int>&nums){
		    int n= nums.size();
		    int low=1,high=1;
		    for(int i=1;i<n;i++){
		        if(nums[i]>nums[i-1])
		            high=low+1;
		        else if(nums[i]<nums[i-1])
		            low=high+1;
		            
		    }
		    return max(low,high);
		    // Code here
		}

};
