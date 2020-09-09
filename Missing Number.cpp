#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],sum=0;
        for(int i=0;i<n-1;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            sum+=a[i];
        }
        int n_sum = (n*(n+1))/2;
        int m=n_sum-sum;
        cout<<m<<endl;
    }
        
	//code
	return 0;
}
