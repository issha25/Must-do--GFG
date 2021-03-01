class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int> pos;
	    vector<int> neg;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0)
	            pos.push_back(arr[i]);
	        else
	            neg.push_back(arr[i]);
	    }
	    for(int i=0,j=0,k=0;i<n;){
	        if(j<pos.size())
	            arr[i++]=pos[j++];
	        if(k<neg.size())
	            arr[i++]=neg[k++];
	    }
	    // code here
	}
};
