#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int size,sum;
        cin>>size>>sum;
        int arr[size];
        for(int j=0;j<size;j++){
            cin>>arr[j];
        }
        //
        int start=0,curr_sum=arr[0],found=0;
        for(int i=1;i<=size;i++){
            while(curr_sum > sum && start < i-1){
                curr_sum = curr_sum-arr[start];
                start++;
            }
            
            if(curr_sum == sum){
                
                found=1;
                break;
            }
            
            if(i < size){
                curr_sum = curr_sum+arr[i];
            }
           
        }
        if(found)
            cout<<start+1<<" "<<i<<endl;
        else
            cout<<"-1"<<endl;
      
       
	//code
    }
	return 0;
}
