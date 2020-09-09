#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }
        int sum=0,m=INT_MIN;
       
        for(int i=0 ; i<n ; i++){
        
            sum=max(a[i],sum+a[i]);
            if(sum>m){
                m=sum;
            }
            
        }
        cout<<m<<endl;
    }
	//code
	return 0;
}
