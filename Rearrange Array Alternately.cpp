#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        vector<int> v;
        for(int k=0;k<n;k++){
            cin>>a[k];
        }
        int i=0,j=n-1;
        while(i<=j){
            if(i==j){
                v.push_back(a[i]);
                break;
            }
            v.push_back(a[j]);
            v.push_back(a[i]);
            i++;
            j--;
        }
        for(auto p : v)
            cout<<p<<" ";
        cout<<endl;
    }   
	//code
	return 0;
}
